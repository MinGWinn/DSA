/*
Cho một quân mã trên bàn cờ vua tại vị trí ST. Nhiệm vụ của bạn là hãy tìm số bước di chuyển ít nhất để đưa quân mã tới vị trí EN.
Input:
Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 xâu dạng “xy” và “uv”, trong đó x, y là kí tự trong “abcdefgh” còn y, v là số thuộc 1, 2, 3, 4, 5, 6, 7, 8.
Output: 
Với mỗi test, in ra đáp án tìm được trên một dòng.
Ví dụ:
Input:
8
e2 e4
a1 b2
b2 c3
a1 h8
a1 h7
h8 a1
b1 c3
f6 f6
Output
2
4
2
6
5
6
1
0
*/
#include<bits/stdc++.h>
using namespace std;
struct chess{
    char x;
    int y;
};
void Solve(chess st, chess en){
    queue<chess> q;
    q.push(st);
    int a[st] = 0;
    
}
main(){
    int t; cin >> t;
    while(t--){
        chess st, en;
        cin >> st.x >> st.y;
        cin >> en.x >> en.y;
        
    }
}