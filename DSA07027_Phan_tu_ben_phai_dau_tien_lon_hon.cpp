
/*
Cho dãy số A[] gồm N phần tử. Với mỗi A[i], bạn cần tìm phần tử bên phải đầu tiên lớn hơn nó. Nếu không tồn tại, in ra -1.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 100000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).

Output: 

Với mỗi test, in ra trên một dòng N số R[i], với R[i] là giá trị phần tử đầu tiên lớn hơn A[i].

Ví dụ

Input


3

4

4 5 2 25

3

2 2 2

4

4 4 5 5
Output

5 25 25 -1

-1 -1 -1

5 5 -1 -1
*/
#include<bits/stdc++.h>
using namespace std;
void Solve(int n, int a[]){
    stack<int> st;
    st.push(a[0]);
    for(int i = 0; i < n; i++){
        
        if(a[i] > st.top()){
            st.push(a[i]);
        }
        //stack chua ptu lon nhat tu 0 -> i
        {
            //ptu lon hon a[i] dau tien
            int j = i+1;
            while(a[j] <= a[i] and j < n){
                j++;
            }
            //ptu cuoi cung thi return 1
            if(j == n) cout << -1 << " ";
            else cout << a[j] << " ";
        }

    }
    cout << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        Solve(n, a);
    }
}