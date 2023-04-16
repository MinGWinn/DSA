/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán DFS.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán DFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
      Ví dụ:

Input:

Output:

1

6  9  1  6

1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

1 2 5 6
*/

#include<bits/stdc++.h>
using namespace std;
int n, m, u, v;
vector<int> List[1005];
bool chuaxet[1005];
int truoc[1005];
void DFS(int u){
    chuaxet[u] = false;
    for(int i : List[u]){
        if(chuaxet[i]){
            truoc[i] = u;
            DFS(i);
        }
    }
}
void induongdi(){
    stack<int> st;
    st.push(v);
    while(st.top() != u){
        int x = st.top();
        st.push(truoc[x]);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        memset(truoc, 0, sizeof(truoc));
        memset(chuaxet, true, sizeof(chuaxet));
        // memset(List, 0, sizeof(List));
        cin >> n >> m >> u >> v;
        int x, y;
        for(int i = 1; i <= m; i++){
            cin >> x >> y;
            List[x].push_back(y);
        }
        DFS(u);
        if(chuaxet[v]){
            cout << -1;
        }
        else induongdi();
        cout << "\n";
        for(int i = 1; i < n; i++){
            List[i].clear();
        }
    }
}