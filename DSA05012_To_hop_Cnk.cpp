#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int m = 1e9 + 7;
int n, k;
void qhd()
{
    for (int i = 1; i <= 1000; i++)
        a[1][i] = i;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = i; j <= 1000; j++)
        {
            //cthuc pascal: nCk = (n-1)Ck + (n-1)C(k-1)
            a[i][j] = (a[i - 1][j - 1] % m + a[i][j - 1] % m) % m;
            // a[i][j] = (a[i - 1][j - 1] % m + a[i][j - 1] % m) % m;
        }
    }
    cout << a[k][n] << "\n";
}
void tinh(){
    for(int i = 0; i < 1005; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0) a[j][i] = 1;
            else a[j][i] = (a[j][i-1] + a[j-1][i-1]) % m;
        }
    }
    cout << a[k][n] << "\n";
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        // qhd();
        tinh();
    }
}
