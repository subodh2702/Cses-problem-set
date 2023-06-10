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


    int n,m;
    cin >> n >> m; 

    multiset<int> M;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        M.insert(x);
    }


    for(int i=0;i<m;i++){

        int x;
        cin >> x;
        
        auto it = upper_bound(all(M),x);

        if(it == M.begin()){
            cout << -1 << endl;
        }else{

           --it;
            cout << (*it) << endl;
            M.erase(M.find((*it)));  // to erase only one element 
        }


    }



    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}