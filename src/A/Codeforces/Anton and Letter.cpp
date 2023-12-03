//http://codeforces.com/contest/443/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    set<char> st;
    getline(cin, s);
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] != ',' && s[i] != ' ')
        {
            st.insert(s[i]);
        }
    }
    cout << st.size();

    return 0;
}