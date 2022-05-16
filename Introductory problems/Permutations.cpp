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

    if(n!=1 && n<=3){
        cout << "NO SOLUTION";
    }else{

        if(n%2==0){

            for(int i=n/2;i>=1;i--){
                

                cout << i << " " << (n/2)+i << " " ;
            }
        }else{
            int p = n;

            int arr[n];

            
            n-=1;


            for(int i=0;i<p/2;i++){
                
                arr[i] = n;
                n-=1;
                arr[p-1-i] = n;
                n-=1;
            }
            arr[p/2]=p;


            for(int i=0;i<p;i++){

                cout << arr[i] << " " ;
            
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}