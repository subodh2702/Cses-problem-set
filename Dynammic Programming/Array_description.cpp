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

    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    fo(i,0,n-1) cin >> v[i];

    vector<vector<ll>> dp(n, vector<ll> (m+2,0));


    // dp[i][j] = total arrays possible of length i+1 whose last element value is j; 
    // dp[i][0] = 0 : since, no array is possible whose last element is zero as all the values lie b/w 1 to m.
    // i have choosen the column size of dp = m+2 just for calculation easy as while calculating dp[i][m] we need dp[i][m+1] anyway
    // value of dp[i][m+1] = 0 always so no problem occurs.


    /* INITIALIZATION or the BASE Case :

       when the first element of the given array is non-zero i.e. it's fixed then only dp[0][arr[0]] = 1 and all other values in this 
       row is zero.
       and when the first element is 0 i.e. it's not fixed then all the values of dp[0][1...m] = 1, understand the meaning of dp[i][j]
       to get it's feel and understanding.

    */
    if(v[0]==0) 
        fo(j,1,m) dp[0][j] = 1;
    else
        dp[0][v[0]] = 1;

    // initialization over.

    // since have calculated dp[0][j]  in the initialization itself hence, starting the outer loop from 1.
    fo(i,1,n-1){

        if(v[i]!=0){ // if the arr[i] != 0 means it's fixed so only that value in that particular row is calculated using prev. row
                     // other values in this row automatically becomes zeros (since have initialized dp array with 0 earlier so nothing to
                     // do.)

            dp[i][v[i]] = dp[i-1][v[i]-1]+dp[i-1][v[i]]+dp[i-1][v[i]+1];
            dp[i][v[i]] %= M;
            continue;
        }
        fo(j,1,m){ // if arr[i] == 0 that means the array can end at any digit 1...m which can be calculated using prev. row for each j 1 to m.

            dp[i][j] = dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
            dp[i][j] %= M;

        }

    }

    int ans = 0;

    fo(j,1,m){  // the final ans is the sum of all possibile arrays ending from 1 to m. 
        ans += dp[n-1][j];
        ans %= M;
    }

    cout << ans;

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