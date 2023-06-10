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

    vector<ll> v(n);

    fo(i,0,n-1){
        cin >> v[i];
    }

    vector<vector<ll>> dp(n, vector<ll> (n,-1));

    vector<ll> prefix_s(n);

    prefix_s[0] = 0;

    fo(i,1,n){

        prefix_s[i] = prefix_s[i-1]+v[i-1];

    }

    fo(i,0,n-1){

        int r = 0;
        int c = i;

        
        while(c<=n-1){

            if(r==c){
                dp[r][c] = v[r];
                r++;
                c++;
                continue;
            }

            dp[r][c] = max( v[r] + (prefix_s[c+1] - prefix_s[r+1]) - dp[r+1][c], v[c] + (prefix_s[c] - prefix_s[r]) - dp[r][c-1]);

            // dp[i][j] = max. amt. a player whose chance it is can create from array [i.....j].
            r++;
            c++;
        }


    }

    fo(i,0,n-1){
        fo(j,0,n-1){
            cout << dp[i][j] << "     ";
            
        }
        cout << el << el;
    }
    cout << dp[0][n-1];
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