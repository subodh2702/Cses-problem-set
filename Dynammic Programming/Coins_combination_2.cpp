#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M  1000000007


vector<int> v;
int n,x;

void solve(){

    cin >> n >> x;
    v.resize(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    vector<int> dp(x+1,0);
    dp[0]=1;
    for(int i = 0;i<n;i++){
        for(int j=1;j<=x;j++){
            
            if(j-v[i]>=0){

                dp[j] += dp[j-v[i]];
                dp[j] %= M;
            }
            
        }
    }

    cout << dp[x];

    
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