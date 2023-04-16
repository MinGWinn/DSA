#include<bits/stdc++.h>
using namespace std;
int n, a[100], b[100];
void quaylui(int i){
    
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    //b la sort cua day a;
    sort(b + 1, b + n);
    quaylui(1);
}