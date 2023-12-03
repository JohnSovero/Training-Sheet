//http://codeforces.com/contest/266/problem/A
#include <bits/stdc++.h>
using namespace std;

int ans = 0;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}