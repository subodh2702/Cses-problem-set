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

    string s,t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1));

    // here dp[i][j] == min no. of operations required to make the prefix before s[i] equal to string t[0....j-1].
    // it means the final subproblem is dp[n][m].

    /* INITIALIZATION :
       
       for the first row where i = 0 & j = [0....m] dp[0][j] means min no. of operations to make an empty string since prefix of s[0] is
       empty string equal to string t[0...j-1] and hence, dp[0][j] = j; as when j = 0. then t[0-1] == empty string so. no operation is 
       required hence, dp[0][0] = 0. for dp[0][1] = prefix before s[0] ie. the empty string has to be made equal to t[0] for which only one
       operation is possible ie. to add t[0] to the empty string so dp[0][1] = 1 and so on.

    */
    fo(i,0,n){
        dp[i][0] = i;
    }
    fo(j,0,m){
        dp[0][j] = j;
    }

    fo(i,1,n){
        fo(j,1,m){


            if(s[i-1]!=t[j-1])
                dp[i][j] = min({dp[i-1][j-1] /*when the letter is replaced*/ , dp[i-1][j] /*when the letter s[i-1] is removed*/, 
                           dp[i][j-1] /*when the letter t[j-1] is added to string s[0..i-1]*/}) + 1;
            else
                dp[i][j] = dp[i-1][j-1];


        }
    }

    cout << dp[n][m];

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