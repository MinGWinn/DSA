#include<bits/stdc++.h>
using namespace std;
main(){
    stack<int> st;
    vector<int> vt;
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        {
            if(s == "PUSH"){
                int n; cin >> n;
                st.push(n);
                vt.push_back(n);
            }
            else if(s == "POP"){
                if(!st.empty()){
                    st.pop();
                    vt.pop_back();
                }
                else continue;
            }
            else if(s == "PRINT"){
                if(st.empty()){
                    cout << "NONE\n";
                    continue;
                }
                else{
                    cout << st.top() << "\n";
                }
            }
        }
    }
}