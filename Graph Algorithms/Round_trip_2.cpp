#include <bits/stdc++.h>
using namespace std;

#define M 1000000007
#define ll long long
#define all(a) a.begin(), a.end()
#define el "\n"
#define endl "\n"
#define fo(i,a,b) for(ll i=a;i<=b;++i)
#define rev(p) reverse(p.begin(),p.end());
#define pb push_back
#define ppb pop_back

// cycle detection in directed graph:


vector<vector<int>> graph;
vector<int> color;
vector<int> parent;
int cycle_starts = -1;
int cycle_ends = -1;

bool dfs(int v, int p){

    color[v]=1;  // color set to 1 means node v is in the current call stack.
    parent[v] = p;

    for(int child : graph[v]){

        if(color[child]==1){  // the child is already visited in the current stack so there is a cycle.

            cycle_ends = v;
            cycle_starts = child;
            return true;
            
        }

        // if(color[child]==0){

        //     if(dfs(child, v)){
        //         return true;
        //     }

        // }


        if(dfs(child, v)){
            return true;
        }

        
    }
    
    color[v] = 2;  // the current node visited i.e. all the edges outgoing from it have been explored.
    return false;
}

void solve(){


    int n,m;
    cin >> n >> m;

    graph.assign(n+1, vector<int>());
    color.assign(n+1, 0);
    parent.assign(n+1,-1);

    fo(i,1,m){

        int a, b;
        cin >> a >> b;

        graph[a].pb(b);
    }

    bool v;
    fo(i,1,n){

        if(color[i]==0){
            v = dfs(i, -1);
            if(v) break;  // cycle is found.
        }
    }


    if(cycle_starts==-1) cout << "IMPOSSIBLE" << el;
    else{

        vector<int> ans;

        for(int v = cycle_ends; v != cycle_starts; v = parent[v]){

            ans.pb(v);
        }
        ans.pb(cycle_starts);
        ans.pb(cycle_ends);
        reverse(all(ans));

        cout << ans.size() << el;
        for(auto a : ans){
            cout << a <<  " ";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    for(int i=1;i<=t;i++){
        solve();
    }

    return 0;
}