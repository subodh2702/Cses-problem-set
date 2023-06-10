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

    int n;
    cin >> n;

    vector<int> v(n);
    fo(i,0,n-1){
        cin >> v[i];
    }

    int m = 1e5+1;

    vector<vector<bool>> dp(n, vector<bool>(m,false));

    dp[0][0] = true;
    dp[0][v[0]] = true;

    fo(i,1,n-1){
        fo(j,0,m-1){

            if(dp[i-1][j]) dp[i][j] = true;
            if(j-v[i]>=0)
                if(dp[i][j-v[i]] && dp[i-1][j-v[i]]) dp[i][j] = true;
        }
    }

    int k = 0;

    fo(j,1,m){
        if(dp[n-1][j]) k++; 
    }

    cout << k << el;

    fo(j,1,m){
        if(dp[n-1][j]) cout << j << " "; 
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