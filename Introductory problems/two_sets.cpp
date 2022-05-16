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


// think around sum of 1,2 .... n is n(n+1)/2 if has to divide in two sets then this sum must be even for which find the property of the n.


void solve(){

    int n;
    cin >> n ;

    if(n==1){
        cout << "NO" << endl;
        return;
    }


    if(n%2==0){

        if((n/2)%2==1){
            cout << "NO" ;
            return;
        }else{

            set<int> s;
            set<int> p;

            for(int i=1;i<=n/2;i+=2){

                s.insert(i);
                p.insert(i+1);
            
            }

            for(int i=n/2+1;i<=n-1;i+=2){

                p.insert(i);
                s.insert(i+1);
            
            }

            cout << "YES" << endl;


            cout << s.size() << endl;

            for(auto i : s){
                cout << i << " " ;
            }

            cout << endl;

            cout << p.size() << endl;

            for(auto i : p){
                cout << i << " " ;
            }

        }
    }else{

        int q = n-3;

        if((q/2)%2==1){
            cout << "NO" ;
            return;
        }else{

            set<int> s;
            s.insert(3);
            set<int> p;
            p.insert(1);
            p.insert(2);
            

            for(int i=1;i<=q/2;i+=2){

                s.insert(i+3);
                p.insert(i+4);
            
            }

            for(int i=q/2+1;i<=q-1;i+=2){

                p.insert(i+3);
                s.insert(i+4);
            
            }

            cout << "YES" << endl;


            cout << s.size() << endl;

            for(auto i : s){
                cout << i << " " ;
            }

            cout << endl;

            cout << p.size() << endl;

            for(auto i : p){
                cout << i << " " ;
            }

        }


    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}