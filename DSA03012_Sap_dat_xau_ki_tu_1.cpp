#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int d = 2;
        int a['z'+1] = {0};
        for(int i = 0; i < s.size(); i++) a[s[i]]++;
        int m = *max_element(a, a + 'z');
        if((m-1)*d < s.size()) cout << 1 << "\n";
        else cout << -1 << "\n";
    }
}