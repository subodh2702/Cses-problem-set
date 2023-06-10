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

int binexp(int a, int b, int m){

    int result = 1;
    while(b>0){
        if(b&1){
            result = (result * 1LL * a) % m;
        }
        a = (a*1LL*a)%m;
        b >>= 1;
    }
    return result;
}
void solve(){

    int n;
    cin >> n;

    if(((n*(n+1))/2)%2==1){
        cout << 0 ;
    }else{

        ll val = (n*(n+1))/4;

        vector<ll> prev(val+1,0);
        prev[0] = 1;

        vector<ll> curr(val+1,0);
        int l = 1;

        while(l<=n){

            fo(i,0,val){
                
                curr[i] = prev[i];
                if(i-l>=0){
                    curr[i]+= prev[i-l];
                }   
                curr[i] %= M;

            }

            l++;
            prev = curr;

        }

        cout << (prev[val]*(binexp(2,M-2,M)))%M; 
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