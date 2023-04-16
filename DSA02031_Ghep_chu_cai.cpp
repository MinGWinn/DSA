#include <bits/stdc++.h>
using namespace std;
int a[100], b[100];
int n;
// bool check()
// {
//     if (a[1] == 1 ||a[n] == 1 ||a[1] == 5 || a[n] == 5)
//         return 1;
//     return 0;
// }
bool check()
{
    for (int i = 2; i <= n - 1; i++)
        if ((a[i] == 1 || a[i] == 5) && 
        (a[i - 1] != 1 && a[i - 1] != 5) && 
        (a[i + 1] != 1 && a[i + 1] != 5))
            return 0;
    return 1;
}

void backtrack(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!b[j])
        {
            a[i] = j;
            b[j] = 1;
            if (i == n)
            {
                if(check()) 
                {
                    for (int k = 1; k <= n; k++)
                        cout << char(a[k] + 'A' - 1);
                    cout << "\n";
                }
            }
            else
                backtrack(i + 1);
            b[j] = 0;
        }
    }
}
int main()
{
    char x;
    cin >> x;
    n = x - 'A' + 1;
    backtrack(1);
}