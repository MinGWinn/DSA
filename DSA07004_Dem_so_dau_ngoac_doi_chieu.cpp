/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:

Input:


4

))((

((((

(((())

)(())(((
Output

2

2

1

3
*/
#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    int ans = 0;
    int n = s.size();
    if(s[0] == ')'){
        ans++; 
        s[0] = '(';
    }
    if(s[n-1] == '('){
        ans++;
        s[n-1] = ')';
    }
    stack<char> st;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(s[i]);
        else {//la ki tu ')'
            if(!st.empty() and st.top() == '(') st.pop();
            else if(st.empty()){
                //neu het ngoac mo '( '-> chuyen ngoac dong thanh ngoac mo
                s[i] = '(';
                st.push(s[i]);
                ans++;
            }
        }
    }
    //TH qua nhieu ngoac mo -> du ngoac mo
    if(!st.empty()) ans += st.size()/2; //1 nua ngoac mo thanh ngoac dong
    return ans;
}
main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << solve(s) << "\n";
    }
}