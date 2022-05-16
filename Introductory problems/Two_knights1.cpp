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


// https://codeforces.com/blog/entry/78943 nice cf blog.


// we get a closed form expression for the total no. of possible non-attacking arrangments of the two knights.

// time complexity is O(1) for each k hence, for 1 <= k <= n , time complexity is O(n).

void solution(int k){

    ll ans = 1LL*(k*k)*(k*k-1)/2 - 1LL*4*(k-1)*(k-2);

    cout << ans << endl;
}
void solve(){

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){

        solution(i);
    
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}