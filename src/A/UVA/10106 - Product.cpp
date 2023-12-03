#include <bits/stdc++.h>
using namespace std;

const int MAXN = 600;

string x, y;
// Consider both numbers like strings
// approach: reverse X number, and multiply each digit of X by Y. It doesn't function because Y can be more than long long
// aprroach2 : reverse both numbers, implement multiplication method and save in an array of maximum 503 of space
// TODO: Compare solution reversing numbers and not reversing numbers
//* In this problem I needed to use memset because the array needs to change in each case. Also need to use - '0' for char numbers
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    while (cin >> x >> y)
    {
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end()); 
        int ans[MAXN];
        memset(ans, 0, sizeof(ans));
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0; j < y.size(); j++)
            {
                ans[i + j] += (x[i] - '0') * (y[j] - '0');
            }
        }
        for (int i = 0; i < MAXN - 1; i++)
        {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
        int i = MAXN - 1;
        while (i > 0 && ans[i] == 0)
            i--;
        for (; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}