/*
Cho mảng A[] gồm N số nguyên. 
Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. 
Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ 
trong mảng. 
Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 
bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, 
lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.
Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. 
Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; 
dòng tiếp theo đưa vào N số của mảng A[]; 
các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1000; 1≤A[i] ≤1000.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/
#include<bits/stdc++.h>
using namespace std;
int n, a[1001], kq, f[1001];
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        kq = 0;
        cin >> n; 
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++){
            f[i] = 1;
            for(int j = 1; j < i; j++){
                //day tang dai nhat thi a[j] < a[i]
                //nhung so buoc it nhat thi a[j] <= a[i]: do neu = nhau thi k can doi cho(neu = nhau thi van tang f -> day con chi tang thanh day con khong giam)
                if(a[j] <= a[i]) f[i] = max(f[i], f[j] + 1);
            }
            kq = max(f[i], kq);
        }
        //so buoc it nhat = so ptu - day con tang dai nhat
        //
        cout << n - kq << "\n";
    }
}