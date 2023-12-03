//http://codeforces.com/contest/677/problem/A
#include <bits/stdc++.h>
using namespace std;

int n, h, x, ans = 0;

int main()
{
    cin >> n >> h;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x > h)
            ans++;
        ans++;
    }
    cout << ans;
    return 0;
}