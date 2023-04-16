/*
Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.
Input: Dòng đầu ghi số bộ test T (T<10).  Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 < N ≤ 200) và S (0 < S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 < Ai ≤ 200).
Output:  Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”
*/
#include <bits/stdc++.h>
using namespace std;
int n, s, a[10000];
void backtrack()
{
        bool check[s + 5] = {0};
        check[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (check[j - a[i]] == 1)
                    check[j] = 1;
            }
        }
        if (check[s] == 1)
            cout << "YES";
        else
            cout << "NO";
}
main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        backtrack();
        cout << "\n";
    }
}
