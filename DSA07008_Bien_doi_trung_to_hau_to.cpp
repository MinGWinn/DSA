/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng trung tố về dạng hậu tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤10.
Các phép toán bao gồm +, -, *, /, ^. Phép lũy thừa có ưu tiên cao hơn nhân chia và cộng trừ.
Ví dụ:

Input



2

(A+(B+C)

((A*B)+C)
Output
ABC++

AB*C+
*/

#include <bits/stdc++.h>
using namespace std;
int Priority(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;
    else return 0;
}
string Solve(string s)
{
    string res = "";
    stack<char> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        if (x == '(')
            st.push(x);
        else if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
            res += x;
        // chuyen lan luot cac ptu o stack sang res cho den khi het bo ngoac ()
        else if(x == ')'){
            while(st.size() && st.top() != '('){
                char y = st.top();
                res += y;
                st.pop();
            }
            if(!st.empty()) st.pop();
        } 
        //+ - * / ^
        else
        /*{
            if(st.empty()) st.push(x);
            else{
                char y = st.top();
                if (Priority(x) >= Priority(y))
                    st.push(x);
                else {
                    st.pop();
                    res += y;
                    st.push(x);
                }
            }
        }*/
        //trong stack uutien lon hon -> lay ra
        //den khi khong the lon hon dc nx thi cho x vao st
        {
            while(st.size() && Priority(x) <= Priority(st.top())){
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    //testcase thieu dau ngoac:(A+(B+C)
    // luc do result se la ABC++(
    while(st.size() && st.top() != '('){
        res += st.top();
        st.pop();
    }
    return res;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Solve(s) << "\n";
    }
}