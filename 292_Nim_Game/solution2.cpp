#include "header.h"

bool canWinNim2(int n)
{
    vector<bool> dp(n + 1, true);

    for (int i = 4; i < n + 1; i++)
    {
        dp[i] = !dp[i - 1] || !dp[i - 2] || !dp[i - 3];
    }

    return dp[n];
}