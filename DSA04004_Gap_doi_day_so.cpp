#include <bits/stdc++.h>
using namespace std;
//len long long thi k bi RTE
long long n, k, a[100];
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        // a[i] luu so p tu cua day thu i
        a[1] = 1;
        for (int i = 2; i <= n; i++)
            a[i] = 2 * a[i - 1] + 1;
        while (1)
        {
            if (k == (a[n] + 1) / 2)
            {
                cout << n;
                break;
            }
            else if (k < (a[n] + 1) / 2)
            {
                n--;
            }
            else //if (k > (a[n] + 1) / 2)
            {
                k -= (a[n] + 1) / 2;
                n--;
            }
        }
        cout << "\n";
    }
}