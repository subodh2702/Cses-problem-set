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

    unordered_set<int> u;
    u.insert(5);
    u.insert(6);
    u.insert(4);
    u.insert(9);
    u.insert(6);

    for(auto a : u){
        cout << a <<el;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}