#include<bits/stdc++.h>
using namespace std;
long long m = 123456789;
long long poww(long long n, long long k){
    if(k == 0) return 1;
    long long x = poww(n, k/2);
    if(k&1) return (n * (x * x)%m)%m;
    else return x * x % m;
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        cout << poww(2,n-1) << "\n";
    }
}