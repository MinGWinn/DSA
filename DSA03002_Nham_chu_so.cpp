#include <bits/stdc++.h>
using namespace std;
int Max(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '5')
            s1[i] = '6';
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '5')
            s2[i] = '6';
    }
    return stoi(s1) + stoi(s2);
}
int Min(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '6')
            s1[i] = '5';
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '6')
            s2[i] = '5';
    }
    return stoi(s1) + stoi(s2);
}
main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << Min(s1, s2) <<  " " << Max(s1, s2) ;
}