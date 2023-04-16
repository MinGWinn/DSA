/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn hãy tìm số bước đi ít nhất dịch chuyển từ vị trí A[1][1] đến vị trí A[M][N]. Biết mỗi bước đi ta chỉ được phép dịch chuyển đến vị trí A[i][j+A[i][j]] hoặc vị trí A[i+A[i][j]][j] bên trong ma trận.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N; phần thứ hai là các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤M, N, A[i][j]≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng. In ra -1 nếu không tìm được đáp án.
Ví dụ:

Input



1

3  3

2  1  2

1  1  1

1  1  1
Output
2
*/
#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[1005][1005], c[1005][1005] = {-1};
void Solve(){
    int move = 0;
    int ans = -1;
    int x = a[1][1];
    queue< pair<int,int> > q;
    q.push({1,1});
    c[1][1] = 0;
    while(!q.empty()){
        pair<char,int> t = q.front();
        int i = t.first; 
        int j = t.second;
        int x = a[i][j];
        q.pop();
        if(c[i][j + x] == -1){
            q.push({i, j + x});
            c[i][j + x] = c[i][j] + 1;
        }
        if(c[i + x][j] == -1){
            q.push({i + x, j});
            c[i + x][j] = c[i][j] + 1;
        }
        if(c[n][m] != -1) break;
    }
    cout << c[n][m] << "\n";

}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        Solve();
    }
}