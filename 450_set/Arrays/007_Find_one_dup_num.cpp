#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int mp[100001];

public:
    int findDuplicate(vector<int> &nums)
    {

        int n = nums.size();

        for (int i = 0; i < n; i++)
            mp[nums[i]]++;

        for (int i = 0; i < n; i++)
        {
            if (mp[i] > 1)
                return i;
        }

        return -1;
    }
};

// https://leetcode.com/problems/find-the-duplicate-number/submissions/