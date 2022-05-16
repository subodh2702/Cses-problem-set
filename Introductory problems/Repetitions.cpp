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

    int ans =0;
    int p1 =0;
    int p2 =0;

    

    while(true){

        if(p2>=s.length()){
            ans = max(ans,p2-p1);
            break;
        }

        if(s[p2]==s[p1]){
            ++p2;
        }else{
            ans = max(ans,p2-p1);
            p1 = p2;
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