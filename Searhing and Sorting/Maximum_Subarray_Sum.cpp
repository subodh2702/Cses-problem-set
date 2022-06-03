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

// Using Kadane's algorithm can be solved in O(n).
void solve(){

    int n;
    cin  >> n;

    vector<int> v(n);   

    fo(i,0,n-1){

        cin >> v[i];
    }

    ll cur_sum=0;
    ll max_sum = INT_MIN;

    fo(i,0,n-1){

        cur_sum+=v[i];

        if(cur_sum>max_sum){
            max_sum = cur_sum;
        }
        if(cur_sum<0){
            cur_sum=0;
        }
    }

    cout << max_sum;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}