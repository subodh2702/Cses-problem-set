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

    ll n;
    cin >> n;

    while(true){


        if(n%2==0){
            if(n==1){
                cout << n << " ";
                break;
            }

            cout << n << " ";
            n=n/2;
            
            
        }else{

            if(n==1){
                cout << n << " ";
                break;
            }
            cout << n << " ";
            n=n*3+1;
            
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}