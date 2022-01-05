#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        // code here
        if (N == 1)
        {
            return 1;
        }

        int ans = K + (M - 1) % N;

        if (ans > N)
        {
            ans %= N;
        }

        return ans;
    }
};