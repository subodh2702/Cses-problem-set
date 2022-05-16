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

// time complexity of this solution is O(1^2 +2^2 + 3^2 + 4^2 + 5^2 + ...............+ n^2) = O(n^3).

// hence for n = 1000 gets TLE with time limit of 1 sec.


void solution(ll k){

    ll ans =0;

    

    for(int i=1;i<=k;i++){

        
        for(int j=1;j<=k;j++){
            int occup = 1;

            
            if(i+2<=k && j+1 <=k){
                occup++;
            }
            if(i+2<=k && j-1 >=1){
                occup++;
            }
            if(i-2>=1 && j+1 <=k){
                occup++;
            }
            if(i-2>=1 && j-1 >=1){
                occup++;
            }
            if(i+1<=k && j+2 <=k){
                occup++;
            }
            if(i-1>=1 && j+2 <=k){
                occup++;
            }
            if(i+1<=k && j-2 >=1){
                occup++;
            }
            if(i-1>=1 && j-2>=1){
                occup++;
            }

            ans+=((k*k)-occup);
        }

       
    
    }

    cout << ans/2 << endl;

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