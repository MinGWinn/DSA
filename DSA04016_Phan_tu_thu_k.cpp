/*
Cho hai mảng đã được sắp xếp A[], B[] gồm M, N phần tử theo thứ tự và số K. Nhiệm vụ của bạn là tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số M, N, K; dòng tiếp theo đưa vào M số của mảng A[];dòng tiếp theo đưa vào N số của mảng B[];các số được viết cách nhau một vài khoảng trống.
T, M,N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N, A[i], B[i]≤106; 1≤ K≤N+M.
Output:

Đưa ra giá trị phần tử thứ K của mỗi test theo từng dòng.
   Ví dụ:

Input



1
5 4 5
2 3 6 7 9
1 4 8 10
Output
6
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        int m, n, k;
        cin >> m >> n >> k;
        // int a[m];
        // int b[n];
        int c[m + n];
        // for(int i = 0; i < m; i++){
        //     cin >> a[i];
        //     c[i] = a[i];
        // }
        // for(int i = 0; i < n; i++){
        //     cin >> b[i];
        // }
        for(int i = 0; i < m + n; i++){
            cin >> c[i];
        }
        sort(c, c + m + n);
        cout << c[k-1] << "\n";
        
    }
}