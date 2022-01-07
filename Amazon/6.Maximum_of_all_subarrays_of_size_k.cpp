#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        priority_queue<pair<int, int>> maxQueue;

        int i = 0;
        int j = 0;

        while (j < n)
        {
            pair<int, int> temp({arr[j], j});
            maxQueue.push(temp);

            if (j - i + 1 >= k)
            {
                while (maxQueue.top().second > j || maxQueue.top().second < i)
                {
                    maxQueue.pop();
                }
                ans.push_back(maxQueue.top().first);

                i++;
            }
            j++;
        }
        return ans;
    }
};