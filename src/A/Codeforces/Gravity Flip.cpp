//http://codeforces.com/contest/405/problem/A
#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}