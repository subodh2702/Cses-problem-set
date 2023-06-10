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


void solve(){

    int n;
    cin >> n;

    vector<int> pos(n);

    fo(i,1,n){

        int x;
        cin >> x;

        pos[x-1] = i;

    }

    int round =1;

    fo(i,0,n-2){

        if(pos[i]<pos[i+1]){
            continue;
        }else{

            round++;
        }
    }

    cout << round;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}