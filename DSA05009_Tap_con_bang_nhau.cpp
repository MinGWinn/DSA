/*
Cho tập các số A[] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A[] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N phần tử của dãy số A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A[i] ≤100.
Output:
Đưa ra kết quả mỗi test theo từng dòng.*/
#include <bits/stdc++.h>
using namespace std;
int n, a[10000], sum, ok;
//sum la tong cua day ban dau, k la tong neu nhu cong voi a[i] or k + voi a[i]
void qhd(int i, int sum, int k)
{
    //neu da cout ra yes r thi nhung ham quaylui con lai return all
    if (ok)
        return;
    if (i == n)
    {
        if (k == sum / 2)
        {
            ok = 1;
            cout << "YES";
        }

        return;
    }
    if (k + a[i] <= sum / 2)
        qhd(i + 1, sum, k + a[i]);
    qhd(i + 1, sum, k);
}
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ok = 0;
        sum = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            // kiem tra tong cac ptu trong day neu la so le thi say NO (do la 2 tap con)
            sum += a[i];
        }
        //odd number -> k chia dc thanh 2 day co tong = nhau
        if (sum & 1)
            cout << "NO";
        else
            qhd(1, sum, 0);
        cout << "\n";
    }
}