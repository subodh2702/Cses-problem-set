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

vector<ll> v;
vector<ll> dp;

/*

ll rec(int x){

    if(x<0) return 0;
    if(x==0) return 1;

    if(dp[x]!=-1) return dp[x];

    dp[x] = 0;

    fo(i,0,v.size()-1){
        dp[x] += rec(x-v[i])%M;
    }

    dp[x] = dp[x]%M;

    return dp[x];

}

*/
void solve(){

    int n,x;
    cin >> n >> x;
    v.resize(n);
    dp.resize(x+1,0);
    fo(i,0,n-1){
        cin >> v[i];
    }

    // cout << rec(x);

    dp[0]=1;

    fo(i,1,x){
        dp[i]=0;
        fo(j,0,n-1){
            if(i-v[j]>=0)
                dp[i] += dp[i-v[j]];
                dp[i] %= M;  
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