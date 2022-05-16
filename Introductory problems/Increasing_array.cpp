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

    int n;
    cin >> n;

    ll arr[n];

    cin >> arr[0];
    ll val = arr[0];

    ll ans =0;
    for(int i=1;i<n;i++){
        
        cin >> arr[i];

        if(val >= arr[i]){
            ans = ans + (val-arr[i]);
        }else{

            val = arr[i];

        }
    }

    cout << ans ;

    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}