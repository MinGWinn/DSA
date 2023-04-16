#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
long long poww(long long n, long long k){
    if(k == 0) return 1;
    long long x = poww(n, k/2);
    if(k&1) return (( (x * x)%m)*n)%m;
    else return (x * x) % m;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        long long n = stoll(s);
        // cout << s << " ";
        for(char x : s) st.push(x);
        s.clear();
        while(!st.empty()){
            s = s + st.top();
            st.pop();
        }
        // cout << s << " ";
        long long r = stoll(s);
        // cout << n << " " << r;
        cout << poww(n,r) << "\n";
    }
}
