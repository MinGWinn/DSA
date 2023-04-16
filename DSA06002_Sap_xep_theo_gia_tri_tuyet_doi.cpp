#include<bits/stdc++.h>
using namespace std;
int k;
bool cmp(int a, int b){
    return abs(k-a) < abs(k-b);
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> k;
        int a[n]; 
        for(int &i : a) cin >> i;
        stable_sort(a, a + n, cmp);
        for(int i : a) cout << i << " ";
        cout << "\n";
    }
}