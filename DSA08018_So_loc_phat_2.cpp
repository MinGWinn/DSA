/*
Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
  Output:

Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in đáp án theo thứ tự tăng dần.
  Ví dụ:

Input


2

2

3
Output

6

6 8 66 68 86 88

14

6 8 66 68 86 88 666 668 686 688 866 868 886 888
*/


#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n; cin >> n;
    queue<string> q;
    vector<string> st;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string x = q.front();
        q.pop();
        st.push_back(x); 
        if(x.size() < n) q.push(x + "6");
        if(x.size() < n) q.push(x + "8");
    }
    cout << st.size() << "\n";
    for(int i = 0; i < st.size(); i++) cout << st[i] << " ";
    cout << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
}