//http://codeforces.com/contest/731/problem/A
#include <bits/stdc++.h>
using namespace std;

string s;
int ans = 0;

int main()
{
    cin >> s;
    int pos = 97;
    for (int i = 0; i < s.size(); i++)
    {
        int a = abs(s[i] - pos);
        int b = abs(26 - a);
        ans += min(a, b);
        pos = s[i];
    }
    cout << ans;
    return 0;
}