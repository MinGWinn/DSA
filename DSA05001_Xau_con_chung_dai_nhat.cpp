/*
Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này 
(các phần tử không nhất thiết phải liên tiếp nhau).
Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). 
Mỗi test gồm hai dòng, mô tả xâu S1 và S2, 
mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.
Output:  Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.
*/
#include <bits/stdc++.h>
using namespace std;
string s1, s2;
//1000 ptu -> c[100][100] -> RTE
int c[100][100];
int qhd()
{
    for (int i = 1; i <= s1.size(); i++)
    {
        for (int j = 1; j <= s2.size(); j++)
        {
            //C[i][j]: tinh i ky tu xau s1 trong j ky tu xau s2 => 
            // i va j khac 0 (tinh tu ky tu thu nhat -> thu s.size)
            // con ky tu thu nhat trong xau la s[0]-> s[i-1];
            if (s1[i-1] == s2[j-1])
                c[i][j] = c[i - 1][j - 1] + 1;
            else
            {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
        }
    }
    return c[s1.size()][s2.size()];
}
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        c[100][100] = {0};
        cin >> s1 >> s2;
        cout << qhd() << "\n";
    }
}
