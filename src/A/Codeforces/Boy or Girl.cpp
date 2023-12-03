//http://codeforces.com/contest/236/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<char> st;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    int sz = st.size();
    if (sz & 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}