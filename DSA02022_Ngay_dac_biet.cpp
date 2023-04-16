#include <bits/stdc++.h>
using namespace std;
int n, a[100], dem;
string s;
bool check()
{
    // neu a[5] : so dau tien cua nam = 0 -> false
    // neu a[1] = a[2] = 0 -> ngay 00 -> false
    // neu a[3] = a[4] = 0 -> thang 00 -> false
    if (!a[5] || (a[1] == a[2] && !a[1]) || (a[3] == a[4] && !a[3]))
        return 0;
    // neu a[3] == 2 : thang 20(max la 12) - > false
    if (a[3] == 2)
        return 0;
    return 1;
}
void backtrack(int i)
{
    for (int j = 0; j <= 2; j += 2)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())

            {
                // cout << ++dem << " ";
                for (int i = 1; i <= n; i++)
                {
                    if (i == 3 || i == 5)
                        cout << '/';
                    cout << a[i];
                }
                cout << "\n";
            }
        }
        else
        {
            backtrack(i + 1);
        }
    }
}
int main()
{
    n = 8;
    // dem = 0;
    backtrack(1);
}