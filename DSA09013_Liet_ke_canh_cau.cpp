/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các cạnh cầu của đồ thị?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| + 1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; |E| dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các cạch cầu của mỗi test theo từng dòng. In ra đáp án theo thứ tự từ điển, theo dạng “a b …” với a < b.
       Ví dụ:

Input:

Output:

1

5 5

1 2 

1 3

2 3

2 5

3 4

2 5 3 4
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

void canhcau(){ 
    for(int i = 1; i <= n; i++){
        //u la vitri trong vector
        for(int u = 0; u < List[i].size(); u++){
            // i, j la 2 dinh cua 1 canh
            int j = List[i][u];
            if(i > j) continue;
            else{
                //xoa canh i j;
                List[i].erase(List[i].begin() + u);
                DFS(i);
                bool isfind = 0;
                //duyet het cac dinh, neu co dinh ch dc xet thi tang thanh phan lien thong
                for(int k = 1; k <= n; k++) if(chuaxet[k]) isfind = 1;
                if(isfind) cout << i << " " << j << " ";
                //them lai canh i j vao trong do thi
                List[i].insert(List[i].begin() + u, j);
            }
            memset(chuaxet, 1, sizeof(chuaxet));
        }
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
        // dinhtru();
        canhcau();
        cout << "\n";
    }
}