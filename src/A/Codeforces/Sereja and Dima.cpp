//http://codeforces.com/contest/381/problem/A
#include <bits/stdc++.h>
#define fast_io                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

int n, sj = 0, di = 0, may;
int main()
{
    fast_io
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int y = 0, z = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (a[y] > a[z])
        {
            may = a[y];
            y++;
        }
        else
        {
            may = a[z];
            z--;
        }
        if (i & 1)
            di += may;
        else
            sj += may;
    }
    cout << sj << " " << di;
    return 0;
}