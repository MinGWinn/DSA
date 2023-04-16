/*
Cho đơn đồ thị vô hướng có n đỉnh dưới dạng danh sách kề.

Hãy biểu diễn đồ thị bằng ma trận kề.

Input: Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 ≤  n ≤  1000). n dòng tiếp theo, dòng thứ i chứa các số nguyên là các đỉnh kề với đỉnh i.  

Output:  Ma trận kề của đồ thị.

Ví dụ:

Input



3

2 3

1 3

1 2
Output
0 1 1

1 0 1

1 1 0
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; cin >> n;
    cin.ignore();
    vector<int> List[n+1];
    int a[n+1][n+1] = {0};
    for(int i = 1; i <= n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss >> token){
            int x = stoi(token);
            //List[i].push_back(x);
            a[i][x] = 1;
            a[x][i] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
}