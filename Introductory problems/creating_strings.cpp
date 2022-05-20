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

    string s;
    cin >> s;


    set<string> p;
    sort(all(s));
    p.insert(s);


    while(next_permutation(all(s))){
        p.insert(s);
    }

    cout << p.size() << endl;

    for(auto i : p){
        
        cout << i << endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}