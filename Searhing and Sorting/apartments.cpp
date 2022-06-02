#include <bits/stdc++.h>
using namespace std;

#define M 1000000007
#define ll long long
#define all(a) a.begin(), a.end()
#define el "\n"
#define fo(i,a,b) for(ll i=a;i<=b;++i)
#define rfo(i,a,b) for(ll i=a;i>=b;--i)
#define ff first
#define ss second
#define rev(p) reverse(p.begin(),p.end());
#define pb push_back
#define ppb pop_back


void solve(){

    int n,m,k;

    cin >> n >> m >> k;

    vector<ll> d(n);

    fo(c,0,n-1){
        cin >> d[c];
    }
    vector<ll> a(m);
    fo(e,0,m-1){
        cin >> a[e];
    }
    sort(all(d));
    sort(all(a));

    int i=0; int j=0;
    int ans=0;

    while(i<n && j<m){

        if(abs(d[i]-a[j])<=k){
            ans++;
            i++;
            j++;
        }else if(d[i]-a[j]>k){

            j++;
        }else{
            i++;
        }
    }

    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}