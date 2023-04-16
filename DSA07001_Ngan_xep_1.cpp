#include<bits/stdc++.h>
using namespace std;
main(){
    stack<int> st;
    string s;
    int x;
    vector<int> vt;
    while(cin >> s){
        if(s == "push"){
            cin >> x;
            st.push(x);
            vt.push_back(x);
        }
        else if(s == "pop"){
            //kiem tra empty
            if(st.empty()){
                cout << "empty";
                break;
            }
            else {
                st.pop();
                vt.pop_back();
            }
        }
        else if(s == "show"){
            //kiem tra empty
            if(st.empty()){
                cout << "empty";
                break;
            }
            else {
                for(int x : vt) cout << x << " ";
                cout << "\n";
            }
        }
    }

}