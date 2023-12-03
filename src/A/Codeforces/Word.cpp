//http://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;

string s;
int up = 0, lw = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            lw++;
        else
            up++;
    }
    if (up > lw)
    {
        for (int i = 0; i < s.size(); i++)
            cout << (char)toupper(s[i]);
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
            cout << (char)tolower(s[i]);
    }
    return 0;
}