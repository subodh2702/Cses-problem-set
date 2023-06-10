#include <bits/stdc++.h>
using namespace std;

#define M 1000000007
#define ll long long
#define all(a) a.begin(), a.end()
#define el "\n"
#define endl "\n"
#define fo(i,a,b) for(ll i=a;i<=b;++i)
#define rfo(i,a,b) for(ll i=a;i>=b;--i)
#define ff first
#define ss second
#define rev(p) reverse(p.begin(),p.end());
#define pb push_back
#define ppb pop_back

vector<int> depth;
vector<vector<int>> v;
void dfs(int r, int par = -1){

    for(int child : v[r]){

        if(child == par) continue;
        depth[child] = depth[r]+1;
        dfs(child, r);
    }
}
void solve(){

    int n;
    cin >> n;

    v.assign(n+1, vector<int>());
    depth.assign(n+1, 0);

    fo(i,1,n-1){
        int a,b;
        cin >> a >> b;

        v[a].pb(b);
        v[b].pb(a);
    }

    dfs(1);   // choose any node as root and start the dfs to find the maximum depth node from this root.

    int mx_depth = 0;
    int mx_depth_node =1;

    fo(i,1,n){

        if(mx_depth<depth[i]){

            mx_depth = depth[i];
            mx_depth_node = i;

        }

        depth[i] =0;
    }

    dfs(mx_depth_node);  // start the dfs from node found out previously and find the node having greatest depth this two nodes will be the two end of the diameter.
    mx_depth = 0;

    fo(i,1,n){

        if(mx_depth<depth[i]){

            mx_depth = depth[i];
            mx_depth_node = i;

        }

        depth[i] =0;
    }

    cout << mx_depth;



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