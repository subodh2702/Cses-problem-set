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

// nice use of prefix sum .

void solve(){

    int n;

    cin >> n;

    vector<pair<int,int>>  v;

    fo(i,0,n-1){

        int l,r;
        cin >> l >> r;

        v.pb(make_pair(l,1));
        v.pb(make_pair(r,-1));


    }

    sort(all(v));

    int ans =0;
    int sum =0;

    for(auto a : v){

        sum+=a.second;
        ans = max(sum,ans);
    }

    cout << ans;
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}