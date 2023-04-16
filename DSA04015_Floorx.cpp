/*
Cho mảng đã được sắp xếp A[] gồm N phần tử không có hai phần tử giống nhau và số X. Nhiệm vụ của bạn là tìm floor(X). Trong đó, K=floor(X) là phần tử lớn nhất trong mảng A[] nhỏ hơn hoặc bằng X.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số N là số phần tử của mảng A[] và số X; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤107; 1≤ A[i]≤1018.
Output:

Đưa ra vị trí của  floor(X) trong mảng A[] hoặc -1 nếu không tồn tại floor(X) của mỗi test theo từng dòng.
   Ví dụ:

Input



3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19
Output
-1
2
4
*/

#include <bits/stdc++.h>
using namespace std;

main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int ans = -1;
        long long a[n + 5];
        int m = -1e9;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] <= k && a[i] > m){
                ans = i;
                m = a[i];
            }
        }
        cout << ans << "\n";
    }
}