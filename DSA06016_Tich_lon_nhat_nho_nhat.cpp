/*
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là tìm tích giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i] ; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤106; -108≤ A[i] ≤108.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:
2
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6

1 4 2 3 10 2
4 2 6 5 2 9
Output:
-9
20
*/
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    sort(a, a + n);
    sort(b, b + n);
    long long mul = (long long)a[n-1] * b[0];
    // cout << a[n-1] << " " << b[0] << "\n";
    cout << mul << "\n";
}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
}