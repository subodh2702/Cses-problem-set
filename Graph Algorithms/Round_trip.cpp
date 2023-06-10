#include <bits/stdc++.h>
using namespace std;

#define M 1000000007
#define ll long long
#define all(a) a.begin(), a.end()
#define el "\n"
#define endl "\n"
#define fo(i,a,b) for(ll i=a;i<=b;++i)
#define rfo(i,a,b) for(ll i=a;i>=b;--i)
#define rev(p) reverse(p.begin(),p.end());
#define pb push_back
#define ppb pop_back

// cycle detection in undirected graph

vector<vector<int>> graph;
vector<bool> visited;
vector<int> parent;

int cycle_starts = -1;
int cycle_ends = -1;

bool dfs(int v, int p){

    visited[v] = true;
    parent[v] = p;

    for(int child : graph[v]){

        if(child == p) continue;
        if(visited[child]){  // cycle found
            cycle_starts = child;
            cycle_ends = v;
            return true;
        }

        if(dfs(child, v)) return true;

    }

    return false;

}
void solve(){

    int n,m;
    cin >> n >> m;

    graph.assign(n+1,vector<int>());
    visited.assign(n+1,false);
    parent.assign(n+1, -1);

    fo(i,1,m){
        int a,b;
        cin >> a >> b;


        graph[a].pb(b);
        graph[b].pb(a);
    }

    bool z;
    fo(i,1,n){

        if(!visited[i]){
            z =  dfs(i, -1);
            if(z) break;  // a cycle has been found
        }

    }


    if(cycle_starts==-1) cout << "IMPOSSIBLE" << endl;
    else{

        vector<int> ans;
        for(int v = cycle_ends; v != cycle_starts; v = parent[v]){
            ans.pb(v);
        }
        ans.pb(cycle_starts);
        ans.pb(cycle_ends);

        reverse(all(ans));
        cout << ans.size() << el;
        for(int a : ans){
            cout << a << " ";
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