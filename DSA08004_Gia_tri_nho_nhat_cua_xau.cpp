/*
Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. Ta định nghĩa giá trị của xâu S[] là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 32 + 22 + 12 + 12 = 15. Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự trong xâu.

Input:

Dòng đầu tiên đưa vào số lượng test T (T≤100).
Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại số K. Dòng thứ 2 ghi lại xâu ký tự S[] có độ dài không vượt quá 10^6.
Output:

Đưa ra giá trị nhỏ nhất của mỗi test theo từng dòng.
Input



2

0

ABCC

1

ABCC
Output
6

3
*/

#include<bits/stdc++.h>
using namespace std;

void Solve(){
    int k; cin >> k;
    string s; cin >> s;
    // dem so luong ki tu xuat hien
    int n = s.size();
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    //dua so luong vao queue
    priority_queue<int> q;
    for(auto i : mp) q.push(i.second);
    //lan luot lay so lon nhat - 1 roi them so moi vao queue
    //lap lai k lan
    while(k--){
        int x = q.top();
        q.pop();
        q.push(x - 1);
    }
    //nhan len
    long long res = 0;
    while(!q.empty()){
        res += (long long)q.top() * q.top();
        q.pop();
    }
    cout << res << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
}