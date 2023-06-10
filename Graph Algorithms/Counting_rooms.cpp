#include <bits/stdc++.h>
using namespace std;


// multi-source bfs.

void bfs(int i, int j, vector<string> &v, int &n, int &m, vector<vector<int>> &is_visited){

    queue<pair<int,int>> q;
    is_visited[i][j] = 1;
    q.push({i,j});

    while (!q.empty())
    {
        pair<int,int> top = q.front();
        q.pop();

        int r = top.first;
        int c = top.second;

        vector<int> dx = {1,-1,0,0};
        vector<int> dy = {0,0,1,-1};

        for(int k = 0; k<4 ; k++){

            int x = r + dx[k];
            int y = c + dy[k];

            if(x>-1 && x<n && y>-1 && y<m){

                if(v[x][y]=='.' && !is_visited[x][y]){
                    is_visited[x][y] = 1;
                    q.push({x,y});
                }
                
            }
        }
    }
    
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

    int rooms = 0;

    vector<vector<int>> is_visited(n, vector<int>(m,0));

    for(int i = 0;i<n;i++){
        for(int j = 0; j<m;j++){
            if(v[i][j]=='.'  && !is_visited[i][j]){
                rooms++;
                bfs(i,j,v,n,m,is_visited);
            }
        }
    }

    cout << rooms;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}