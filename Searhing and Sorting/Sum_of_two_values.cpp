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

    int n,x;
    cin >> n >> x;

    vector<pair<int,int>> v(n);
    
    for(int i=0;i<n;i++){

        cin >> v[i].first;
        v[i].second = i+1;
    
    }

    sort(all(v));

    int p1 =0;
    int p2 = v.size()-1;

    while(p1<p2){

        if(v[p1].first+v[p2].first==x){

            cout << v[p1].second << " " << v[p2].second;
            return;
        }else if(v[p1].first+v[p2].first<x){

            p1++;
        }else{

            p2--;
        }
    }

    cout << "IMPOSSIBLE";

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}