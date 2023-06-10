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

int dfs(vector<vector<int>> &v,int r,int p,vector<int> &ans){

    int sum = 1;
    for(auto i : v[r]){
        if(i != p){
            sum += dfs(v,i,r,ans);
        }
    }

    ans[r] = sum-1;
    return sum;
}
void solve(){

    int n;
    cin >> n;

    vector<vector<int>> v(n+1);

    fo(i,2,n){

        int a;
        cin >> a;

        v[a].push_back(i);
        v[i].push_back(a);
    }

    vector<int> ans(n+1);

    int b = dfs(v,1,-1,ans);

    fo(i,1,n){
        cout << ans[i] << " ";
    }


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
}