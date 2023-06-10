#include <bits/stdc++.h>
using namespace std;

bool dfs(int i, int j, stack<char> &path, vector<string> &v){

    int n = v.size();
    int m = v[0].size();
    
    if(v[i][j]=='B'){
        return true;
    }
    vector<int> dx = {1,-1,0,0};
    vector<int> dy = {0,0,1,-1};

    for(int k = 0; k<4 ; k++){

        int x = i + dx[k];
        int y = j + dy[k];

        if(x>-1 && x<n && y>-1 && y<m){

            if(v[x][y]=='.'){            
                if(k==0){
                    path.push('R');
                }
                if(k==1){
                    path.push('L');
                }
                if(k==2){
                    path.push('D');
                }
                if(k==3){
                    path.push('U');
                }
                if(dfs(x,y,path,v)){
                    
                    return true;
                }
                path.pop();
            } 
        } 

    }  

    

    return false;     
}
void solve(){

    int n,m;
    cin >> n >> m;

    vector<string> v;

    for(int i = 1;i<=n;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    stack<char> path;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<m;j++){

            if(v[i][j]=='A'){

                if(dfs(i,j,path,v)){
                    cout << "YES" << endl;
                    cout << path.size() << endl;

                    string s = "";

                    while(!path.empty()){

                        s += path.top();
                        path.pop();
                    }

                    reverse(s.begin(),s.end());

                    cout << s << endl;

                    return;
                }
            }
        }
    }

    cout << "NO";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}