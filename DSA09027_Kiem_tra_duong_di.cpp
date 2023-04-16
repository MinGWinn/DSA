/*
Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.
Output:  Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, in ra “NO” nếu ngược lại.

Ví dụ:

Input:


1

6 5

1 2

2 3

3 4

1 4

5 6

2

1 5

2 4
Output

NO

YES
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
void DFS(int u){
    chuaxet[u] = false;
    for(int v : List[u]){
        if(chuaxet[v]) DFS(v);
    }
}
bool Truyvan(int x, int y){
    memset(chuaxet, true, sizeof(chuaxet));
    DFS(x);
    if(chuaxet[y]) return false;
    else return true;
}
main(){
    int t; cin >> t;
    while(t--){
        memset(List, 0, sizeof(List));
        memset(chuaxet, true, sizeof(chuaxet));
        int n, m; cin >> n >> m;
        for(int i = 1; i <= m; i++){
            int x, y; cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }
        int q; cin >> q;
        while(q--){
            int x, y; cin >> x >> y;
            if(Truyvan(x, y)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}