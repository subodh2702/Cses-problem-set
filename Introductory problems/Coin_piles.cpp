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

    ll a,b;
    cin >> a >> b;

    if((2*b-a)%3==0 && (2*a-b)%3==0  && (2*b-a)>=0 && (2*a-b)>=0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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