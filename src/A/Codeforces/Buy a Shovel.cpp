//http://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;

int k, r, ans = 1;
void solve()
{
    while (1)
    {
        if (((k * ans) % 10) == 0)
            break;
        if (((k * ans) - r) % 10 == 0)
            break;
        ans++;
    }
    cout << ans;
}
int main()
{
    cin >> k >> r;
    solve();
    return 0;
}