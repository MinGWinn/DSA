#include<bits/stdc++.h>
using namespace std;
void hanoitower(int n, char first, char mid, char last){
    if(n==1) {
        cout << first << " -> " << last << "\n";
        //lenh return de huy quaylui dang thuc hien -> tu dong de quy ve ham backtrack trc no;
        return;
    }
    //chuyen n-1 cai dia tu first sang mid(trung gian)
    hanoitower(n-1, first, last, mid);
    //chuyen cai dia cuoi cung(n) tu first sang last
    cout << first << " -> " << last << "\n";
    //chuyen n-1 cai dia tu mid ve last
    hanoitower(n-1, mid, first, last);

}
int main(){
    int n;
    cin >> n;
    hanoitower(n, 'A', 'B', 'C');
}