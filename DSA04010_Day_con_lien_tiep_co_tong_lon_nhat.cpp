#include<bits/stdc++.h>
using namespace std;
int a[100], n, s, e;
void qhd(){
    s = 0; e = 0;
    for(int i = 0; i < n; i++){
        //ktr so hientai voi tong tu dau den so phia truoc 

        e = max(a[i], e + a[i]);
        //so sanh tong s: tu dau den a[n-1]
        // va tong vua moi + them a[i]
        //neu lam giam thi bo qua a[i], lay tong phia truoc thoi
        s = max(s, e);
    }
    cout << s << "\n";
}
main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        qhd();
    }
}