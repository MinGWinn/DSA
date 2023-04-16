/*
Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input:


2
I like this program very much

much very program this like I
Output:

much very program this like I
I like this program very much


*/

#include <bits/stdc++.h>
using namespace std;
void Solve(string s)
{
    string word;
    int n = s.size();
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
            if(i == n-1) st.push(word);//ki tu cuoi cung r thi push vao st
        }
        else
        {
            st.push(word);
            word.clear();
        }
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        Solve(s);
    }
}