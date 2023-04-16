/*
Cho đơn đồ thị G vô hướng liên thông được mô tả bởi danh sách kề. Hãy in ra danh sách cạnh tương ứng của G.

Input

Dòng đầu tiên ghi số N là số đỉnh (1<N<50)
N dòng tiếp theo mỗi dòng ghi 1 danh sách kề lần lượt theo thứ tự từ đỉnh 1 đến đỉnh N
Output: Ghi ra lần lượt từng cạnh của đồ thị theo thứ tự tăng dần.

Ví dụ

Input



3

2 3

1 3

1 2

 Output

1 2

1 3

2 3
*/
#include<bits/stdc++.h>
using namespace std;
main(){
    int n; cin >> n;
    cin.ignore();
    vector<pair<int,int>> Edge ;
    for(int i = 1; i <= n; i++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        while(ss >> token){
            int u = stoi(token);
            if(i < u) Edge.push_back({i, u});
        }
    }
    for(auto i : Edge){
        cout << i.first << " " << i.second << "\n";
    }
}