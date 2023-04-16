/*
Cho hai số nguyên dương S và T (S, T<10000) và hai thao tác (a), (b) dưới đây:

Thao tác (a): Trừ S đi 1  (S = S-1) ;

Thao tác (b): Nhân S với 2 ( S = S*2);

Hãy dịch chuyển S thành T sao cho số lần thực hiện các thao tác (a), (b) là ít nhất. Ví dụ với    S =2, T=5 thì số các bước ít nhất để dịch chuyển S thành T thông qua 4 thao tác sau:

Thao tác (a): 2*2 = 4;

Thao tác (b): 4-1 = 3;

Thao tác (a): 3*2 = 6;

Thao tác (b): 6-1 = 5;

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một bộ đôi S và T.
          Output: Đưa ra kết quả mỗi test theo từng dòng.

         

          Ví dụ:

Input



3

2 5

3 7

7 4
Output
4

4

3
*/


// Sol: giong quay lui nma dung queue
#include<bits/stdc++.h>
using namespace std;
void Solve(int s, int t){
    //a la mang de luu so buoc tinh den vi tri thu i
    //ex: s = 2, -> a[2] = 0, a[4] = a[1] = 1, a[8] = a[3] = a[0](nhung k xet 0) = a[2](nhung 2 xet r nen loai) = 2, ...
    int a[20001] = {0};
    // memset(a, 0, sizeof(a));
    queue<int> q;
    q.push(s);
    while(a[t] == 0){
        int x = q.front(); q.pop();
        // neu chua dc xet va -1 van con duong
        if(x - 1 > 0 && a[x - 1] == 0){
            //cong so buoc len 1
            //temp = x + 1
            // KHAC
            //temp = x++;
            a[x - 1] = a[x] + 1;
            q.push(x - 1);
        }
        if(x * 2 < 20000 && a[x * 2] == 0){
            a[x * 2] = a[x] + 1;
            q.push(x * 2);
        }
    }
    cout << a[t];
    cout << "\n";

}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int test; cin >> test;
    while(test--){
        int s, t; 
        cin >> s >> t;
        Solve(s, t);
    }
}