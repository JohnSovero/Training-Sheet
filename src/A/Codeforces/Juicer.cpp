//http://codeforces.com/contest/709/problem/A
#include <bits/stdc++.h>
using namespace std;

int n, b, d, x, cnt = 0, ans = 0;
int a[100000];

int main()
{
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(cnt>d){
            ans++;
            cnt = 0;
        }
        if(x > b){
            continue;
        }
        else{
            cnt += x;
        }
    }
    if(cnt>d)ans++;
    cout<<ans;
    return 0;
}