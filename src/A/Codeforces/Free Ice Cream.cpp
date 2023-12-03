//http://codeforces.com/contest/686/problem/A
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, x, y, cnt = 0;
char op;

int32_t main()
{
    cin >> n >> x;
    while (n--)
    {
        cin >> op >> y;
        if (op == '+')
        {
            x += y;
        }
        else if (x - y >= 0)
        {
            x -= y;
        }
        else
        {
            cnt++;
        }
    }
    cout << x << " " << cnt << "\n";
    return 0;
}