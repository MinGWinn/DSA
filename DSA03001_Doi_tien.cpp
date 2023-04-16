#include<bits/stdc++.h>
using namespace std;
/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N.  Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 50).  Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).

Output:  Với mỗi test, in ra đáp án trên một dòng.

*/
//so to: so to tien
int n, a[100], soto;
int main(){
    a[1] = 1;
    a[2] = 2;
    a[3] = 5;
    for(int i = 4; i <= 10; i++) a[i] = a[i-3] * 10;
        // for(int j = 1; j <= 10; j++) cout << a[j] << " ";
    int t; cin >> t;
    while(t--){
        soto = 0;
        cin >> n;
        int i = 10;
        while(n > 0 && i != 0){
            if(a[i] <= n){
                n-=a[i];
                soto++;
            }
            else i--;
        }
        cout << soto << "\n";
    }
}