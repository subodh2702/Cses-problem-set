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


void solve(){

    int a,b;
    cin >> a >> b;

    vector<vector<ll>> dp(a+1, vector<ll> (b+1,-1));

    // dp[i][j] == min. no. of moves to get rectangle of size (i,j) into squares.
    int c = min(a,b);

    fo(i,1,c){
        dp[i][i] = 0;
    }

    fo(i,1,a){
        fo(j,1,b){

            if(i==j) continue;
            dp[i][j] = INT_MAX;

            fo(k,1,i/2){

                ll val = dp[i-k][j]+dp[k][j];
                dp[i][j] = min(dp[i][j], val);
            }

            fo(k,1,j/2){

                ll val = dp[i][j-k]+dp[i][k];

                dp[i][j] = min(dp[i][j], val);
            }

            dp[i][j] += 1;
        }
    }
    cout << dp[a][b];

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