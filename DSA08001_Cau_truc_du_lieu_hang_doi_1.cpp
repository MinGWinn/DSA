/*
Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:

Trả về kích thước của queue
Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
Cho một số nguyên và đẩy số nguyên này vào cuối queue.
Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
Dữ liệu vào

Dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ theo dạng sau.

Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000)

N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 106.

Kết quả: In ra kết quả của các truy vấn..

Ví dụ:

Input



1

14

3 1

3 2

3 3

5

6

4

4

4

4

4

3 5

3 6

5

1
Output
1

3

5

2
*/

#include<bits/stdc++.h>
using namespace std;
main(){ 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int t; cin >> t;
    while(t--){
        int ques; cin >> ques;
        queue<int> q;
        while(ques--){
            int x; cin >> x;
            switch (x)
            {
            case 3: //push
                int n; cin >> n;
                q.push(n);
                break;
            case 1://tra ve kich thuoc cua queue
                cout << q.size() << "\n";
                break;
            case 2://queue rong yes, 0 rong no
                if(q.empty()) cout << "YES" << "\n";
                else cout << "NO" << "\n";
                break;
            case 4:
                if(!q.empty()) q.pop();
                break;
            case 5:
                if(q.empty()) cout << -1 << "\n";
                else cout << q.front() << "\n";
                break;
            case 6: 
                if(q.empty()) cout << -1 << "\n";
                else cout << q.back() << "\n";
                break;
            }   
        }
    }
}