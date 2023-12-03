//http://codeforces.com/contest/770/problem/A
#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;
    while (n--)
        putchar('a' + (n % k));
    return 0;
}