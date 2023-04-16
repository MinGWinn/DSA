#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        x+=y;
        int a[x];
        for(int i =0; i < x; i++) cin >> a[i];
        sort(a, a + x);
        for(int i = 0; i < x; i++) cout << a[i] << " ";
        cout << "\n";
    }
}