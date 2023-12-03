//http://codeforces.com/contest/228/problem/A
#include <bits/stdc++.h>
using namespace std;

int n = 4, x;
set<int> st;

int main()
{
    while(n--){
        cin>>x;
        st.insert(x);
    }
    cout<<4-st.size();
    return 0;
}