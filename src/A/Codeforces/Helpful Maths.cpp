//http://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
using namespace std;

string s;
int x, pos;
char a[50];

int main()
{
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i += 2)
    {
        a[i/2] = s[i];
    }
    sort(a, a + (n / 2) + 1);
    for (int i = 0; i < (n / 2); i++)
        cout << a[i] << "+";
    cout << a[n / 2];
    return 0;
}