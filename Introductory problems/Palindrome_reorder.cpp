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

    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    bool found =false;

    for(auto i : m){

        if(i.second%2==1){
            if(!found){
                found = true;
                continue;
            }else{
                cout << "NO SOLUTION";
                return;
            }
        }
        
    }

    string pal;

    char ch;
    int rep;

    for(auto i : m){
        if(i.second%2==1){

            ch = i.first;
            rep = i.second;
            continue;
        }else{

            for(int j=0;j<i.second/2;j++){
                pal+=i.first;
            }
        }
    }

    if(found){

        string fir=pal;

        for(int i=0;i<rep;i++){

            fir+=ch;
        
        }

        cout << fir;
        reverse(all(pal));
        cout << pal;

    }else{

        cout << pal ;
        reverse(all(pal));
        cout << pal;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}