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


// Nice problem solved by "bitmasking" and nice observation included of the constraint value given.
// can be solved using recursion also since n<=20 so recursive solution will also not give TLE.

void solve(){

    int n;
    cin >> n;

    vector<ll> w(n);

    for(int i=0;i<n;i++){
    
        cin >> w[i];
    }

    ll min = INT64_MAX;

    ll val = pow(2,n);

    for(int i=0;i<val;i++){

        int a = i;

        ll b1 =0;
        ll b2 = 0;
        

        for(int j=n-1;j>=0;--j){
            
            if(a&1==1){
                b1+=w[j];
            }else{
                b2+=w[j];
            }
            a=a>>1;
        }
        ll diff = abs(b1-b2);

        if(diff<min){
            min = diff;
        }


    }

    cout << min ;
    




}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}