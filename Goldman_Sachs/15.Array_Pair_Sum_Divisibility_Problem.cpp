#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        unordered_map<int, int> pairMap;

        for (int i = 0; i < nums.size(); i++)
        {
            int rem = nums[i] % k;

            if (pairMap.count(rem))
            {
                pairMap[rem]++;
            }
            else
            {
                pairMap[rem] = 1;
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int rem = nums[i] % k;

            if (rem == 0 || 2 * rem == k)
            {
                if (pairMap[rem] % 2 != 0)
                {
                    return false;
                }
            }
            else
            {
                if (pairMap[rem] != pairMap[k - rem])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
