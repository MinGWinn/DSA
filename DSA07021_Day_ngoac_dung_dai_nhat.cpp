#include<bits/stdc++.h>
using namespace std;
void Solve(string s){
    int kq = 0;
    stack<int> st;
    st.push(-1);
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '(') st.push(i);
        else { //s[i] == )
            st.pop();
            if(!st.empty()){
                // j la vi tri ngay truoc dau ( trong cap () sau khi tim dc cap (), cap() da bi pop ra
                int j = st.top();
                kq = max(kq, i - j);
            }
            //pop xong neu st rong thi lai phai push vao
            //luc nay vi tri push i la vi tri ngay truoc dau ( dau tien
            else st.push(i);
        }
    }
    cout << kq << endl;
}
main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solve(s);
    }
}