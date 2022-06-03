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

// Using greedy approach to select the next task which ends as soon as possible to get 
// maximum possible no. of tasks done.

bool func(pair<int,int> a , pair<int,int> b){

    return a.second<b.second;
}
void solve(){

    int n;
    cin >> n;



    vector<pair<int,int>> v;

    fo(i,0,n-1){

        int a,b;
        cin >> a >> b;


        v.pb({a,b});
    }
    sort(all(v),func);

    int ans =1;
    int l =0;

    fo(i,1,n-1){

        if(v[i].first>=v[l].second){
            ans++;
            l=i;
        }


    }

    cout << ans;



}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}