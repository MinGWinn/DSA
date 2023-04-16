/*
Cho xâu S chỉ bao gồm các ký tự viết thường và dài không quá 1000 ký tự.

Hãy tìm xâu con đối xứng dài nhất của S.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
Mỗi test gồm một xâu S có độ dài không vượt quá 1000, chỉ gồm các kí tự thường.
Output:  Với mỗi test, in ra đáp án tìm được.

*/
/*
    f[i][j] = do dai xau con doi xung tu vi tri s[i] -> s[j];

*/
#include <bits/stdc++.h>
using namespace std;
void qhd(string s)
{
    int n = s.size();
    bool f[1005][1005];
    int Max = INT_MIN;
    memset(f, false, sizeof(f));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
                f[i][j] = 1;
            else if (s[i] == s[j])
            {
                if (j - i == 1)
                    f[i][j] = 1;
                else
                    f[i][j] = f[i + 1][j - 1];
            }
            if (f[i][j] == 1 and j - i + 1 > Max)
            {
                Max = j - i + 1;
            }
        }
    }
    cout << Max << "\n";
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        qhd(s);
    }
}