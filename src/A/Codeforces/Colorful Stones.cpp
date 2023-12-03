//http://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
using namespace std;

string s, s2;
int ans = 0;
int main()
{
    cin >> s >> s2;
    for (int i = 0; i < s2.size(); i++)
        if (s2[i] == s[ans])
            ans++;
    cout << ans + 1;
    return 0;
}