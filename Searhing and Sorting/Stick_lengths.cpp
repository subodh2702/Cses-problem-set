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

    int n;
    cin >> n;

    vector<int> v(n);
    fo(i,0,n-1){
        cin >> v[i];
    }

    sort(all(v));

    ll cost =0;

    int median=(n)/2;

    fo(i,0,n-1){
        cost+=abs(v[i]-v[median]);
    }

    cout << cost ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}