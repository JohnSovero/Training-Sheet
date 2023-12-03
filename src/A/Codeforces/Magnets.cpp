//http://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(false);
using namespace std;

int n, x, ans = 1;

int main()
{
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1])
            ans++;
    cout << ans;
    return 0;
}