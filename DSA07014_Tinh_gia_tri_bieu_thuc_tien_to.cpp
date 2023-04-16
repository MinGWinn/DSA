/*
Hãy viết chương trình tính toán giá trị của biểu thức tiền tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp. Các số xuất hiện trong biểu thức là các số đơn có 1 chữ số.
Output:

Đưa ra kết quả mỗi test theo từng dòng, chỉ lấy giá trị phần nguyên.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
Ví dụ:

Input



2

-+8/632

-+7*45+20
Output
8

25
*/

#include<bits/stdc++.h>
using namespace std;
void Cal(stack<int> &st, char ope){
    int a = st.top(); st.pop();
    int b = st.top(); st.pop();
    switch (ope)
    {
    case '+':
        st.push(a + b);
        break;
    case '-':
        st.push(a - b);
        break;
    case '*':
        st.push(a * b);
        break;
    case '/':
        st.push(a/b);
        break;
    }                   
}
void Solve(string s){
    int res = 0;
    int n = s.size();
    stack<int> st;
    for(int i = n - 1; i >= 0; i--){
        char x = s[i];
        if(x == '+' || x == '-' || x == '*' || x == '/') Cal(st, x);
        else st.push(x - '0');
    }
    cout << st.top() << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        Solve(s);
    }
}