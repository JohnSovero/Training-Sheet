#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll n, r;

bool isPerfectSquare(ll x)
{
    r = sqrt(x);
    return ((r*r) == x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while (cin >> n)
    {
        if (n == 0)
            break;
        r = sqrt(n);

        if (r * r == n)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}