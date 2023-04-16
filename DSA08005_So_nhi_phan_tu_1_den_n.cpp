/*
Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Mỗi test là một số tự nhiên n được ghi trên một dòng (n≤10000).
Output:

Đưa ra kết quả mỗi test trên một dòng.
Ví dụ:

Input


2

2

5
Output

1 10

1 10 11 100 101
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(int n){
    queue<string> q;
    // q.push("2");
    // q.push("3");
    // q.push("5");
    // q.push("7");
    q.push("1");
    while(n--){
        string s = q.front();
        // n steps cout
        cout << s << " ";
        q.pop();
        q.push(s + "0");
        q.push(s + "1");
        // q.push(s + "2");
        // q.push(s + "3");
        // q.push(s + "5");
        // q.push(s + "7");

/*
s = 1
1 -> cout 1
queue: 10 11
s = 10;
cout 10
queue: 11 100 101
s = 11;
cout 11
queue 100 101 110 111
*/

    }
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Solve(n);
        
        cout << "\n";
    }
}