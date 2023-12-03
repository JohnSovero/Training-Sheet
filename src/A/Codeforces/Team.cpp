//http://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
using namespace std;

int n, x, ans = 0;

int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            if(x) cnt++;
        }
        if(cnt >= 2)ans++;
    }
    cout<<ans;
    return 0;
}