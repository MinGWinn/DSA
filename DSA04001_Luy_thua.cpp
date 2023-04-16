#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int n, k;
long long quaylui(int n, int k){
	if(k == 0) return 1;
	long long x = quaylui(n, k/2);
	if(k % 2 == 0) return x * x % M;
	else return n * (x * x % M) % M;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << quaylui(n,k) << "\n";
	}
}
