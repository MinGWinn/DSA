#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long x;
        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> x;
            while(x > 0){
                s.insert(x%10);
                x/=10;
            }
        }
        for(int i : s) cout << i << " ";
        cout << "\n";
    }
}