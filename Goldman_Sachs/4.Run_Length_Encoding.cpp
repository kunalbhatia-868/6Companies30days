#include <bits/stdc++.h>
using namespace std;

string intToString(int n)
{
    string ans;
    while (n != 0)
    {
        ans = char(48 + (n % 10)) + ans;
        n /= 10;
    }

    return ans;
}

string encode(string src)
{
    // Your code here
    string output;
    char prev = src[0];
    int count = 1;
    for (int i = 1; i < src.size(); i++)
    {
        char curr = src[i];
        if (curr == prev)
        {
            count++;
        }
        else
        {
            output = output + prev + intToString(count);
            prev = curr;
            count = 1;
        }
    }
    output = output + prev + intToString(count);

    return output;
}