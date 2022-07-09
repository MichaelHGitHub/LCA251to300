#include "header.h"

int numSquares2(int n)
{
    vector<int> dp(n + 1);

    for (int i = 1; i < dp.size(); i++)
    {
        dp[i] = i;
    }

    int count = 1;

    while (count * count <= n)
    {
        int sq = count * count;

        for (int i = sq; i < n + 1; i++)
        {
            dp[i] = min(1 + dp[i - sq], dp[i]);
        }

        ++count;
    }

    return dp[n];
}