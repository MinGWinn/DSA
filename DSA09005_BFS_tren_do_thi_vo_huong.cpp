#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> List[1005];
void BFS(int u){
    queue<int> q;
    q.push(u); chuaxet[u] = false;
    while(!q.empty()){
        int x = q.front(); q.pop();
        cout << x << " ";
        for(int i : List[x]){
            if(chuaxet[i]){
                chuaxet[i] = false;
                q.push(i);
            }
        }
    }
}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        memset(chuaxet, true, sizeof(chuaxet));
        memset(List, 0, sizeof(List));
        int n, m;
        int u, x, y;
        cin >> n >> m >> u;
        for(int i = 1; i <= m; i++){
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        BFS(u);
        cout << "\n";
    }
}