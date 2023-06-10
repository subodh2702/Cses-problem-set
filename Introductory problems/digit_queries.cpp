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


// Getting error due to pow or pow1 fuction something related to precision 
// hence, have trouble while calculating pow value getting 999 instead of 1000 etc. 

ll pow1(int n){
    ll val = 1;

    for(int i=0;i<n;i++){

        val =  val*10;
    
    }

    return val;
}


ll cap(ll n){

        ll val = (n*pow1(n)-(pow1(n)-1)/9);
        return val;


}


void solve(){


    ll k;
    cin >> k;


    if(k<=9){
        cout << k << endl;
        return;
    }

    ll i =0;

    ll num;

    while(true){

        ll val = cap(i);

        if(k>val){
            ++i;
            continue;
        }else{

            num = pow1((i-1))+ ((k-cap(i-1)+1)/i)-1;
            break;

        }
    }


    ll u = (k-cap(i-1))-i*((k-cap(i-1)-1)/i);

    ll v = i-u+1;

    ll b = (pow1((v-1)));

    ll ans = (num/b);

    ans = ans%10;

    cout << ans << endl;

    

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