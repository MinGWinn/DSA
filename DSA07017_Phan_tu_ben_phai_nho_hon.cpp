/*
Cho mảng A[] gồm n phần tử. Hãy đưa ra các phần tử nhỏ hơn tiếp theo của phần tử lớn hơn đầu tiên phần tử hiện tại. Nếu phần tử hiện tại không có phần tử lớn hơn tiếp theo ta xem là -1. Nếu phần tử không có phần tử nhỏ hơn tiếp theo ta cũng xem là -1. Ví dụ với mảng A[] = {5, 1, 9, 2, 5, 1, 7} ta có kết quả là ans = {2, 2, -1, 1, -1, -1, -1} vì:

Next Greater                         Right Smaller

5          ->  9                                        9  ->  2

1          ->  9                                        9  ->  2

9          -> -1                                       -1 -> -1

2          -> 5                                         5   -> 1

5          -> 7                                         7  -> -1

1          ->  7                                        7 -> -1

7          -> -1                                       7 -> -1

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[], dòng tiếp theo đưa vào n số A[i].
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤n, A[i] ≤106.
Ví dụ:

Input


2
7

5 1 9 2 5 1 7
8

4 8 2 1 9 5 6 3
Output

2 2 1 1 -1 -1 -1
2 5 5 5 -1 3 -1 -1
*/

#include <bits/stdc++.h>
using namespace std;
void Solve(int a[], int n)
{
    stack<int> st;
    int rmax[n], rmin[n], i;
    for (int i = n - 1; i >= 0; i--)
    {
        while (st.size() && a[i] >= st.top())
            st.pop();
        if (st.size())
        {
            rmax[i] = st.top();
        }
        else
            rmax[i] = -1;

        st.push(a[i]);
    }
    int res[n];

    for (int j = n - 1; j >= 0; j--)
    {
        stack<int> stmin;
        while (stmin.size() && rmax[i] <= stmin.top())
            stmin.pop();
        if (stmin.size())
        {
            rmin[j] = stmin.top();
        }
        else
        {
            rmin[j] = -1;
        }
        stmin.push(a[j]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << rmax[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < n - 1; i++)
        cout << rmin[i] << " ";
    cout << "\n";
    for (int i = 0; i < n - 1; i++)
    {
        res[i] = sau[rmax[a[i]]];
        cout << res[i] << " ";
    }
}
main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &i : a)
            cin >> i;
        Solve(a, n);
        cout << "\n";
    }
}