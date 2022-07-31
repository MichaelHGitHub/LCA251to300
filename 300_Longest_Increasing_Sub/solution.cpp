#include "header.h"

int lengthOfLIS(vector<int>& nums)
{
    int max_sub = 0;
    vector<int> dp(nums.size(), 1);

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j] && dp[j] + 1 > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }

        max_sub = max(max_sub, dp[i]);
    }

    return max_sub;
}