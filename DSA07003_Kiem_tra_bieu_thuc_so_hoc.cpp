#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    int n = s.size();
    stack<int> st;
    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            int j = st.top(); //ptu ( cuoi cung
            st.pop();
            if(i - j == 2) return 0;
            //why not j-1 and i+1
            //-> i+1 -> out of size and j-1: maybe j = 0;
            if(s[j+1] == '(' and s[i-1] == ')') return 0;
        }
    }
    return 1;
}
main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout << "No\n";
        else cout << "Yes\n";
    }
}