#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int &i:a) cin >> i;
        sort(a, a + n, cmp);
        int l = 0, r = n - 1;
        while(l <= r){
            cout << a[l] << " "; l++;
            if(r > l) {
                cout << a[r] << " "; r--;
            }
        }
        cout << "\n";
    }
    return 0;
}
