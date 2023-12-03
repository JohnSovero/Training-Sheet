// http://codeforces.com/contest/791/problem/A
#include <bits\stdc++.h>
using namespace std;

int a, b, ans = 0;

int main(){
    cin>>a>>b;
    while(a <= b){
        a*=3;
        b*=2;
        ans++;
    }
    cout<<ans;
    return 0;
}