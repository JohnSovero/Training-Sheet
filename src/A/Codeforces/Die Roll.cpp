//http://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;

int y, w;

int mcd(int u, int v){
    int r;
    while (v != 0)
    {
        r = u % v;
        u = v;
        v = r;
    }
    return u;
}
int main()
{
    cin>>y>>w;
    int x = max(y,w);
    int u = 7-x;
    int v = 6;
    int d = mcd(u, v);
    cout<<u/d<<"/"<<v/d;
    return 0;
}