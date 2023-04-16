/*
Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của 2 hoặc 3 phần tử trong dãy.

Input

Dòng đầu tiên ghi số N (3 ≤ N ≤ 10000)

Dòng thứ 2 ghi N số của dãy A (|Ai| ≤ 1000)

Outpput

Ghi ra kết quả trên một dòng

Ví dụ

Input



6

5 10 -2 3 5 2
Output
250
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    // 2 so lon nhat, 3 so lon nhat, 2 so nho nhat, 2 so nho nhat + so lon nhat
    cout << max(max(a[0] * a[1], a[n-1] * a[n-2]),max(a[n-1] * a[n-2] * a[n-3], a[n-1] * a[0] * a[1]));
     
}