//http://codeforces.com/contest/799/problem/A
#include <bits/stdc++.h>
using namespace std;

int n, t, k, d, t1 = 0, t2 = 0;

int main()
{
    cin >> n >> t >> k >> d;
    t1 = ceil(n / (k * 1.0)) * t;
    bool f = 0;
    while (n > 0)
    {
        t2++;
        if (t2 % t == 0)
            n -= k;
        if (f && (t2 - d) % t == 0)
            n -= k;
        else if (!f && t2 == d)
            f = 1;
    }
    if (t1 <= t2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}