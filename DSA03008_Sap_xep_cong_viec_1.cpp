/*
Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi <Si, Fi> tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. Hãy tìm phương án thực hiện nhiều nhất các hành động được thực hiện bởi một máy hoặc một người sao cho hệ không xảy ra mâu thuẫn.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số lượng hành động N; dòng tiếp theo đưa vào N số Si tương ứng với thời gian bắt đầu mỗi hành động; dòng cuối cùng đưa vào N số Fi tương ứng với thời gian kết thúc mỗi hành động; các số được viết cách nhau một vài khoảng trống.
T, N, Si, Fi thỏa mãn ràng buộc: 1≤T≤100;  1≤N, Fi, Si≤1000.
Output:

Đưa số lượng lớn nhất các hành động có thể được thực thi bởi một máy hoặc một người.
Ví dụ:

Input
1
6
1  3  0  5  8  5
2  4  6  7  9  9
Output
4
*/
#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
void SapxepCongviec(int n, vector<pair<int,int>> job){
    int count = 1;
    int start = job[0].first;
    int end = job[0].second;
    for(int i = 1; i < n; i++){
        //neu cv thu i co bat dau >= ket thuc cua cv trc thi chon cong viec do
        if(job[i].first >= end){
            count++;
            //gan lai ketthuc = ngay cua cv hien tai
            end = job[i].second;
        }
    }
    cout << count;
}
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector< pair<int,int> > job(n);
        for(int i = 0; i < n; i++) cin >> job[i].first;
        for(int i = 0; i < n; i++) cin >> job[i].second;
        //sap xep cv theo tgian hoan thanh truoc
        sort(job.begin(), job.end(), cmp);
        SapxepCongviec(n, job);
        cout << "\n";
    }
}