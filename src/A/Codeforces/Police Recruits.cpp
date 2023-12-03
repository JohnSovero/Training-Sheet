//http://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;

int ans = 0, x, hired = 0, n;.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == -1)
        {
            if (hired == 0)
            {
                ans++;
            }
            else
            {
                hired--;
            }
        }
        else
        {
            hired += x;
        }
    }
    cout << ans;
    return 0;
}