//http://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int a[4][5001], b[4];
int n, x, y;

int main()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    b[x]++;
    a[x][b[x]] = i;
  }
  y = min(b[1], min(b[2], b[3]));
  cout << y;

  for (int i = 1; i < y; i++)
  {
    cout << "\n" << a[1][i] << " " << a[2][i] << " " << a[3][i];
  }
  if (y != 0)
    cout << "\n" << a[1][y] << " " << a[2][y] << " " << a[3][y];
  return 0;
}