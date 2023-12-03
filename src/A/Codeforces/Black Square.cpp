//http://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;

int t = 1, ans = 0;
string s;

void solve()
{
    int a[5];
    for (int i = 1; i < 5; i++)
        cin >> a[i];
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int pos = s[i] - '0';
        ans += a[pos];
    }
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (t--)
        solve();
    return 0;
}