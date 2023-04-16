/*
Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N].
Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik]
thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].
Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử?
Input: Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). 
Dòng thứ 2 ghi N số nguyên A[1], A[2], .. A[N] (1 ≤ A[i] ≤ 1000).
Output: Ghi ra độ dài của dãy con tăng dài nhất.
*/
#include <bits/stdc++.h>
using namespace std;
int n, a[1001], f[1001], kq = 0;
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        // f[i] la do dai day tang dai nhat ket thuc tai vi tri i
        // moi f[i] deu co it nhat 1 day co do dai la 1
        f[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
                //neu thoa man, so sanh voi f[i] hien tai, neu f[truocno] + 1 > f[i]
                //gan gia tri moi f[i]
                f[i] = max(f[i], f[j] + 1);
        }
        kq = max(kq, f[i]);
    }
    cout << kq;
}