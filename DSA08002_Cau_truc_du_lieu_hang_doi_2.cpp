/*
Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:

“PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).

“PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

“POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.

Dữ liệu vào:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Kết quả:

 

Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

Ví dụ:

 

 

Input



9

PUSH 1

PUSH 2

POP

PRINTFRONT

PUSH 3

PRINTFRONT

POP

POP

PRINTFRONT
Output
2

2

NONE
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    queue<int> q;
    int t; cin >> t;
    while(t--){
        string s; 
        cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
            continue;
        }
        if(s == "POP"){
            if(!q.empty()) q.pop();
            continue;
        }
        if(s == "PRINTFRONT"){
            if(q.empty()) cout << "NONE" << "\n";
            else cout << q.front() << "\n";
            continue;
        }
    }
}