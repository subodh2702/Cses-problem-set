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

int N = 1e6+1;
vector<ll> dp(N,-1);
vector<int> v;

ll rec(int x){

    if(x<0) return INT_MAX;
    if(x==0) return 0;

    if(dp[x]!=-1) return dp[x];

    ll mn = INT_MAX;

    for(int i=0;i<v.size();i++){

        mn = min(rec(x-v[i]),mn);
    }

    dp[x] = (mn+1);
    return dp[x];

}
void solve(){

    int n,x;
    cin >> n >> x;
    v.resize(n);
    fo(i,0,n-1){
        cin >> v[i];
    }

    ll val = rec(x);
    if(val>=INT_MAX) val = -1;

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