//http://codeforces.com/contest/294/problem/A
#include <bits/stdc++.h>
using namespace std;

int n, x, a[100];

void solve(){
    int x, y;
    cin>>x>>y;
    if (x != 1){
        a[x-2] += y-1;
    }
    if(x != n){
        a[x] += a[x-1] - y;
    }
    a[x-1] = 0;
}
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    cin>>x;
    while(x--)solve();
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}