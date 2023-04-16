#include<bits/stdc++.h>
using namespace std;
main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        int i = 0;
        while(a[i] == a[i+1] && i < n-1) i++;
        if(i == n-1) cout << -1;
        else cout << a[0] << " " << a[i+1];
        cout << "\n";
    }
}