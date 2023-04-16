/*
Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤20; 0≤A[i]≤9.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví  dụ:

Input



2
6
6 8 4 5 2 3
5
5 3 0 7 4
Output

604 ->> 2 3 4 5 6 8 -> 246 + 358 = 604
82
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a + 1, a + n + 1);
        string s1, s2;
        for(int i = 1; i <= n; i+=2) s1 += to_string(a[i]);
        for(int i = 2; i <= n; i+=2) s2 += to_string (a[i]);
        cout << stoll(s1) + stoll(s2) << "\n";
    }
}