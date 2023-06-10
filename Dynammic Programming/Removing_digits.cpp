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

vector<ll> dp;

void solve(){

    int n;
    cin >> n;

    dp.resize(n+1,-1);

    dp[0] = 0;

    fo(i,1,n){


        int m = i;

        dp[i] = INT_MAX;

        while(m>0){

            if(m%10==0){
                dp[i] = min(dp[i], 1LL*INT_MAX);
            }else{
                dp[i] = min(dp[i-(m%10)], dp[i]);
            }
            
            m /= 10;

        }
        dp[i]++;
    }


    cout << dp[n];

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