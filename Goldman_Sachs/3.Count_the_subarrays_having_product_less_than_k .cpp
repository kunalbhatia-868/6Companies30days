#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        long long int i = 0;
        int count = 0;
        long long int curr = 1;

        for (long long int j = 0; j < n; j++)
        {
            curr *= a[j];

            while (curr >= k && i < j)
            {
                curr /= a[i];
                i++;
            }

            if (curr < k)
            {
                count += (j - i + 1);
            }
        }
        return count;
    }
};