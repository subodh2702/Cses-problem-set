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

    ll y,x;

    cin >> y >> x;

    if(y>x){

        if(y%2==0){

            unsigned ll ans = (y*y-(x-1));

            cout << ans << endl;

        }else{

            unsigned ll ans = ((y-1)*(y-1)+x);
            cout << ans << endl;


        }
    }else{

        if(x%2==1){

            unsigned ll ans = (x*x-(y-1));

            cout << ans << endl;

        }else{

            unsigned ll ans = ((x-1)*(x-1)+y);
            cout << ans << endl;


        }


    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }

    return 0;
}