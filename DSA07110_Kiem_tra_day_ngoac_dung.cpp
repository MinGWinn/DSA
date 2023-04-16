/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘)’, ‘[‘, ‘]’, ‘{‘, ‘}’. Một dãy ngoặc đúng được định nghĩa như sau:

-     Xâu rỗng là 1 dãy ngoặc đúng.

-     Nếu A là 1 dãy ngoặc đúng thì (A), [A], {A} là 1 dãy ngoặc đúng.

-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

Cho một xâu S. Nhiệm vụ của bạn là xác định xâu S có là dãy ngoặc đúng hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000.

Output: 

Với mỗi test, in ra “YES” nếu như S là dãy ngoặc đúng, in ra “NO” trong trường hợp ngược lại.

Ví dụ:

Input:


2

[()]{}{[()()]()}

[(])
Output

YES

NO
*/
#include<bits/stdc++.h>
using namespace std;
bool Solve(string str) {
	stack<char> s;
	for(int i=0; i<str.length(); i++) {
		char c = str[i];
		if(c == '(' || c == '{' || c == '[') s.push(c);
		else {
			if(!s.empty() && c == ']' && s.top() == '[')  
			    s.pop();
			else if(!s.empty() && c == '}' && s.top() == '{')  
			    s.pop();
			else if(!s.empty() && c == ')' && s.top() == '(')
			    s.pop();
			else return 0;
		}
	}
	return 1;
}

main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(Solve(s)) cout << "YES\n";
        else cout <<"NO\n";
    }
}