#include <bits/stdc++.h>
using namespace std;
/*
Nam có N thẻ bài, mỗi thẻ ghi một con số từ 1 tới N. Không có 2 thẻ nào ghi hai số trùng nhau.
Nam muốn xếp thứ tự các thẻ bài sao cho không có hai con số nào liền kề nhau ở cạnh nhau.
Ví dụ với N = 4 thì cách xếp 3142 là hợp lệ nhưng cách xếp 1324 không hợp lệ.
Hãy giúp Nam liệt kê tất cả các cách xếp thỏa mãn theo thứ tự từ điển.
Input
Dòng đầu ghi số bộ test T (không quá 10)
Mỗi bộ test ghi số N (3 < N < 10)
Output
Với mỗi bộ test, ghi ra tất cả các cách xếp thứ tự thỏa mãn, mỗi cách trên một dòng.
*/
int n;

bool check(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1] + 1 || s[i] == s[i + 1] - 1)
            return 0;
    }
    return 1;
}
string s = "";
int c[1000] = {0};
int a[1000];
void backtrack(int i)
{
    for (int j = 1; j <= n; j++)
    {

        if (!c[j])
        {
            // s += to_string(j);
            a[i] = j;
            c[j] = 1;
            if (i == n)
            {
                for(int k = 1; k <= n; k++) s += to_string(a[k]);
                if (check(s))
                {
                    cout << s << "\n";
                }
                s.clear();
            }
            else
            {
                backtrack(i + 1);
            }
            c[j] = 0;

        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        backtrack(1);
        cout << "\n";
    }
}
