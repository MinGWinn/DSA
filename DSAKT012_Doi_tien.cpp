#include <bits/stdc++.h>
using namespace std;
long long n, a[100], s;
int kq;
void backtrack(int i, int sum, int sototien)
{
    if (sum > s || sototien > kq)
        return;
    if (i == n)
    {
        if (sum == s)
        {
            kq = min(kq, sototien);
        }
        return;
    }
    backtrack(i + 1, sum, sototien);
    backtrack(i + 1, sum + a[i], sototien + 1);
}
int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    kq = 1000;
    backtrack(0, 0, 0);
    if (kq == 1000)
        cout << -1 << "\n";
    else
        cout << kq << "\n";
}