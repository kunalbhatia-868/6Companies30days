#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

class Solution
{
public:
    // #define ull unsigned long long
    /* Function to get the nth ugly number*/
    ull getNthUglyNo(int n)
    {
        // code here
        int p2 = 1;
        int p3 = 1;
        int p5 = 1;

        ull dp[n + 1];
        dp[1] = 1;

        for (int i = 2; i < n + 1; i++)
        {
            ull temp1 = 2 * dp[p2];
            ull temp2 = 3 * dp[p3];
            ull temp3 = 5 * dp[p5];

            ull minTemp = min(temp1, min(temp2, temp3));

            dp[i] = minTemp;

            if (minTemp == temp1)
            {
                p2++;
            }

            if (minTemp == temp2)
            {
                p3++;
            }

            if (minTemp == temp3)
            {
                p5++;
            }
        }

        return dp[n];
    }
};
