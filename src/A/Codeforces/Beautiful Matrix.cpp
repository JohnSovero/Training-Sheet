//http://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
using namespace std;

int m[5][5], a,b;

int main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>m[i][j];
            if(m[i][j]) {
                a = i;
                b = j;
            }
        }
    }
    cout<<abs(a-2) + abs(b-2);
    return 0;
}