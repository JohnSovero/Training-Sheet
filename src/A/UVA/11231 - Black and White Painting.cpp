#include <bits/stdc++.h>
using namespace std;

// Solution: We have an array of 8 x 8 and a chess board embedded in the painting is good when It start with 1.
// I represent the array with 0 and 1.
// The good positions are the ones that are in the good range (n - 7) * (m - 7)

// Example: 9 x 9 board
// Start with 0 in the bottom right corner of the board:
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0

// Start with 1 in the bottom right corner of the board:
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1
// 0 1 0 1 0 1 0 1 0
// 1 0 1 0 1 0 1 0 1

// The board only have 2 good positions that are the ones in the range (n - 7) * (m-7), so (n - 7) * (m-7) / 2 will be the answer
// but it doesn't consider the case when in the range (n - 7) * (m-7) the number of 0 and 1 are different

// Start with 0 in the bottom right corner of the board:
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0

// Start with 1 in the bottom right corner of the board:
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0 1 0
// 0 1 0 1 0 1 0 1 0 1

// The range is (n - 7) * (m-7), but ones are 4 and zeros are 5, so I modified the formula
// if((n - 7) * (m-7) % 2 == 0) then answer = (n - 7) * (m-7) / 2
// else answer = (n - 7) * (m-7) + crn / 2
// OH the formula is good for both cases so: answer = (n - 7) * (m-7) + crn / 2

int n, m, crn;

int main()
{
    while (cin >> n >> m >> crn && n != 0)
    {
        cout << ((n - 7) * (m - 7) + crn) / 2 << "\n";
    }
    return 0;
}