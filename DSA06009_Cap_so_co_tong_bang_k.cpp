#include<bits/stdc++.h>
using namespace std;
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        /*
        // int n, k, x, s = 0; cin >> n >> k;//sum of elements = k;
        // vector<int> v;
        // for(int i = 0; i < n; i++){
        //     cin >> x; 
        //     v.push_back(x);
        // }
        // vector<int>::iterator it;
        // for(int i = 0; i < n; i++){
        //     it = find(v.begin(), v.end(), k - v[i]);
        //     if(it != v.end()) s++;
        // }
        // if(s==n) cout<< s <<"\n";
        // else cout << s/2 << "\n";
        */
        /*
        int n, k, x, s = 0; cin >> n >> k;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        } 
        cout << "before: \n";
        map<int,int>::iterator it;
        for( it = mp.begin(); it != mp.end(); it++){
            cout << it->first << "-" << it->second << "\n";
        }
        for( it = mp.begin();  it != mp.end(); it++){
            map<int,int>::iterator findit = find(mp.begin(), mp.end(), k - it->first );
            if(findit != mp.end()){
                mp[it->first]--;
                mp[k - it->first]--;
                s++;
            }
        }
        cout << "After: \n";
        for( it = mp.begin(); it != mp.end(); it++){   
            cout << it->first << "-" << it->second << "\n";
        }
        cout << "\nSum: " << s;
        cout << "\n";
        */
       int n, k, s = 0; cin >> n >> k;
       int a[n];
       for(auto &i : a) cin >> i;
       for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] + a[j] == k) s++;
            }
       }
       cout << s << "\n";
    }
}