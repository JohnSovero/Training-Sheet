//http://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
using namespace std;

string a, b;
int main(){
    cin>>a>>b;
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if (a>b)cout<<1;
    else if(a==b) cout<< 0;
    else cout<<-1;
    return 0;
}