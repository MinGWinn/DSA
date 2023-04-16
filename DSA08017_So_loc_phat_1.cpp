/*
Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
            Output:

In ra đáp án theo thứ tự giảm dần.
            Ví dụ:

Input



2

2

3
Output
88 86 68 66 8 6

888 886 868 866 688 686 668 666 88 86 68 66 8 6
*/

#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n; cin >> n;
    queue<string> q;
    stack<string> st;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string x = q.front();
        st.push(x); 
        q.pop();
        if(x.size() < n) q.push(x + "6");
        if(x.size() < n) q.push(x + "8");
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
}