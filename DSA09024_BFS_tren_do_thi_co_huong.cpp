/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
      Ví dụ:

Input:

Output:

1

6  9  1

1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

1 2 5 4 6 3
*/
#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> List[1005];
void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int x = q.front(); q.pop();
        cout << x << " ";
        for(int v : List[x]){
            if(chuaxet[v]){
                chuaxet[v] = false;
                q.push(v);
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
        int n, m, u;
        int x, y;
        cin >> n >> m >> u;
        for(int i = 1; i <= m; i++){
            cin >> x >> y;
            List[x].push_back(y);
        }
        BFS(u);
        cout << "\n";
    }
}