#include <bits/stdc++.h>
using namespace std;
int n, k;
char a[100], x;
void backtrack(int i, char now)
{
    //goi het 1A -> chay het 2 A-> D
    //goi den 1B -> chay tu B ->D
    for (char j = now; j <= x; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int z = 1; z <= k; z++)
                cout << a[z];
            cout << "\n";
            // return;
        }
        else
            //ptu tiep theo >= ptu hien tai( AD -> BB chu k p BA)
            backtrack(i + 1, j);
    }
}
int main()
{
    cin >> x >> k;
    backtrack(1, 'A');
}
