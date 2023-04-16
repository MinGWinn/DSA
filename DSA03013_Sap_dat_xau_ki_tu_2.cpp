/*
Cho xâu ký tự S bao gồm các ký tự và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số D; dòng tiếp theo là xâu S.
T, S, D thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤D≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input



2
2

ABB
2
AAA
Output
1
-1
*/
#include <bits/stdc++.h>
using namespace std;

//độ dài xâu: n >= k * d - ( d - 1 ) -> in ra 1 
//( k là số lượng ký tự nhiều nhất trong xâu)
void Solve(int d, string s)
{
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        char x = s[i];
        mp[x]++;
    }
    int k = 0;
    for(auto i : mp){
        if(i.second > k) k = i.second;
    }
    if(n >= k * d - (d - 1)) cout << 1 << "\n";
    else cout << -1 << "\n";
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        string s;
        cin >> s;
        Solve(d, s);
    }
}