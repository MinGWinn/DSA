/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các đỉnh trụ của đồ thị?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh trụ của mỗi test  theo từng dòng.
     Ví dụ:

Input:


1

5 5

1 2 1 3 2 3 2 5 3 4
Output:

2 3
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
bool chuaxet[1005];
int n, m;

void DFS(int u){
    chuaxet[u] = false;
    for(int v : List[u]){
        if(chuaxet[v]) {
            DFS(v);
        }
    }
}
void dinhtru(){
    for(int i = 1; i <= n; i++){
        //duyet dinh i thi bo dinh i
        //tuc la chuaxet[i] = 0 luon tu ban dau -> k goi DFS tu dinh i dc nx
        chuaxet[i] = false;
        if(i == 2) DFS(1);
        else DFS(2);
        bool isfind = 0;
        //dinh i dc xet va DFS(i) dc xet
        // -> neu trong do thi con dinh z ch xet -> k lien thong dc voi dinh z
        // tang thanh phan lien thong -> dinh tru
        for(int i = 1; i <= n; i++) {
            if(chuaxet[i]) isfind = 1;
        }
        if(isfind) cout << i << " ";
        //xet xong 1 dinh thi khoi tao lai gia tri de xet den dinh tiep theo
        memset(chuaxet, true, sizeof(chuaxet));
    }


}

main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        memset(List, 0, sizeof(List));
        memset(chuaxet, true, sizeof(chuaxet));
        cin >> n >> m;
        int x, y;
        for(int i = 1; i <= m; i++){
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }        
        dinhtru();
        cout << "\n";
    }
}