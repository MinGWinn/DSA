/*
Cho dãy số A[] gồm có N phần tử đã được sắp xếp tăng dần và số K.

Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không. Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra “NO”.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test bắt đầu bằng số nguyên N và K (N ≤ 100 000, 0 ≤ K ≤ 106).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 106), các phần tử là riêng biệt.

Output: 

Với mỗi test in ra trên một dòng đáp án tìm được.

Ví dụ:

Input:



2

5 3

1 2 3 4 5

6 5

0 1 2 3 9 10
Output
3

NO
*/

#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+1];
        int ans = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(k == a[i]) ans = i;
        }
        if(!ans) cout << "NO\n";
        else cout << ans << "\n"; 
    }
}