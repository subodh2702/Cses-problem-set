#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(a) a.begin(), a.end()
#define ff first
#define ss second
#define rev(p) reverse(p.begin(),p.end());
#define pb push_back
#define ppb pop_back


void solve(){

    ll m = 1000000007;

    int n;
    cin >> n;

    ll ans = 1;

    for(int i=0;i<n;i++){

        ans = (ans*2)%m;
    
    }

    cout << ans;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}