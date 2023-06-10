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

    int n,x;
    cin >> n >> x;

    vector<int> price(n);
    vector<int> pages(n);

    fo(i,0,n-1){
        cin >> price[i];
    }
    fo(i,0,n-1){
        cin >> pages[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(x+1,0));

    fo(i,1,n){
        fo(j,0,x){
            
            dp[i][j] = dp[i-1][j];
            if(j>=price[i-1])
                dp[i][j] = max(dp[i-1][j], pages[i-1]+dp[i-1][j-price[i-1]]);  // Space optimization is possible here since we need
                // dp[i-1][j] & dp[i-1][j-price[i-1]] ie. we need only the previous row while calculating states of the current row
                // so it's possible.
        }
    }

    cout << dp[n][x];

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