#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {
        // code here
        vector<vector<string>> ans;

        map<map<char, int>, vector<string>> anagramMap;

        for (int i = 0; i < string_list.size(); i++)
        {
            string curr = string_list[i];
            map<char, int> charMap;

            for (int j = 0; j < curr.size(); j++)
            {
                charMap[curr[j]]++;
            }

            anagramMap[charMap].push_back(curr);
        }

        for (auto x : anagramMap)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};