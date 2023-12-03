//http://codeforces.com/contest/268/problem/A
#include <bits/stdc++.h>
using namespace std;

int ans = 0, n;
int main(){
    cin>>n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                if(a[i] == b[j])ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}