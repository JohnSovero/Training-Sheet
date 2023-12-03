#include <bits/stdc++.h>
using namespace std;

int s, mod;

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    while (cin >> s >> mod)
    {
        if (gcd(s, mod) == 1)
        {
            cout << setw(10) << s << setw(10) << mod << "    Good Choice\n";
        }
        else
        {
            cout << setw(10) << s << setw(10) << mod << "    Bad Choice\n";
        }
        cout<<"\n";
    }
    return 0;
}