#include <bits/stdc++.h>
using namespace std;
int n, a[1000007];
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s = 0; 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mod = 1e9+7;
        sort(a, a + n);
        for(int  i = 0; i < n; i++){
            s+=(a[i]*i)%mod;
        }
        cout << s << "\n";
    }
}