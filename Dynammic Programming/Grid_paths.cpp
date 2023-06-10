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

vector<vector<ll>> dp;
vector<string> grid;

/*

RECURSIVE METHOD :

here, dp[x][y] is the number of paths from (x,y) to (n-1,n-1) and the final answer is dp[0][0]. We can also choose dp[x][y] as the 
number of paths from (0,0) to (x,y) then now the transition is dp[x][y] = rec(x-1,y) + rec(x,y-1) and the final answer is now dp[n-1][n-1].

ll rec(int x, int y){

    int N = dp.size();

    if(x>=N || y>= N) return 0;
    if(grid[x][y]=='*') return 0;
    if(x==N-1 && y == N-1) return 1;

    if(dp[x][y]!=-1) return dp[x][y];

    ll val = (rec(x+1, y)%M + rec(x, y+1)%M)%M;

    return dp[x][y] = val;
}

*/

void solve(){

    int n;
    cin >> n;
    dp.resize(n, vector<ll> (n,0));

    fo(i,0,n-1){
        string s;
        cin >> s;
        grid.pb(s);
    }

    // cout << rec(0,0);
    
    // ITERATIVE METHOD :

    fo(i,0,n-1){
        fo(j,0,n-1){

            if(i==0 && j==0){
                dp[i][j]=1;
            }
            if(grid[i][j]=='*'){
                dp[i][j]=0;
                continue;
            }

            if((i-1)>=0) dp[i][j] = dp[i-1][j];
            if((j-1)>=0) dp[i][j] += dp[i][j-1];

            dp[i][j] %= M;

        }
    }

    cout << dp[n-1][n-1];


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