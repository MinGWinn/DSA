#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];

set<string> name;
vector<string> vtname;
void backtrack(int i){
    for(int j = a[i-1] +1; j <= n - k + i; j++){
        a[i] = j;
        if(i==k){
            //in ra vector v[1] v[2], v[1] v[3], ...
            for(int m = 1; m <= k; m++){
                //do vector begin from 0 but a[m] bat dau tu 1 -> a[m]-1
                cout << vtname[a[m]-1] << " ";
            }
            cout << "\n";
        }
        else backtrack(i+1);
    }
}
int main(){
    cin >> n >> k;
    string temp;
    for(int i = 1; i <= n; i++) {
        cin>> temp;
        //dua tung ptu vao trong set va sort
        name.insert(temp);
    }
    //gan lai gtri n = so string khac nhau trong set;
    n = name.size();
    set<string>::iterator it;
    //gan tung ptu trong set vao vector cho de truy cap
    for(it = name.begin(); it != name.end(); it++){
        vtname.push_back(*it);
    }
    backtrack(1);
}