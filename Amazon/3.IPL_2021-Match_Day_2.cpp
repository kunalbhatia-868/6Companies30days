#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        // your code here
        vector<int> ans;

        int i = 0;
        int j = 0;

        deque<int> maxQueue;
        while (j < n)
        {
            while (!maxQueue.empty() && maxQueue.back() < arr[j])
            {
                maxQueue.pop_back();
            }
            maxQueue.push_back(arr[j]);

            if (j - i + 1 >= k)
            {
                ans.push_back(maxQueue.front());

                if (maxQueue.front() == arr[i])
                {
                    maxQueue.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};