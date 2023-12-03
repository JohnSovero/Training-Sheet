//http://codeforces.com/contest/734/problem/A
#include <bits/stdc++.h>

using namespace std;

string s;
int A = 0, D = 0;
int main()
{
    int n;
    cin >> n >> s;
    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == 'A')
            A++;
        else
            D++;
    }
    if (A > D)
        cout << "Anton";
    else if (A == D)
        cout << "Friendship";
    else
        cout << "Danik";
    return 0;
}