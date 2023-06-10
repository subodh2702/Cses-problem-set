#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N = 100;
vector<int> v(N);
int n,x;

// this is correct soln. but here the space of dp vector is O(x*n) and here x<=10^6 & n<=100 so the space required is 10^8 which isn't 
// possible.

ll rec(int level, int left, vector<vector<ll>> &dp){

    int n = dp.size();

    if(left<0 || level>=n) return INT_MAX;
    if(left==0) return 0;
    
    if(dp[level][left]!=-1) return dp[level][left];

    return dp[level][left] = min(rec(level+1, left,dp), 1+rec(level, left-v[level],dp));


}
void solve(){

    cin >> n >> x;

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    vector<vector<ll>> dp(n, vector<ll> (x+1,-1));
    ll val = rec(0,x,dp);
    if(val >= INT_MAX) val = -1;

    cout << val;
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