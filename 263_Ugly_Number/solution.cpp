#include "header.h"
#include <unordered_set>

bool isUgly(int n)
{
    vector<int> factors({ 2, 3, 5 });
    int remain = n;
    if (remain > 0)
    {
        for (int i = 0; i < factors.size(); i++)
        {
            while (remain % factors[i] == 0)
            {
                remain /= factors[i];
            }

            if (remain == 1)
            {
                break;
            }
        }
    }

    return remain == 1;
}


bool attempt(int n)
{
    bool result = false;
    vector<int> factors = { 2, 3, 5 };
    std::unordered_set<int> ugly_nums;

    // Get the set of ugly numbers
    for (int i = 0; i < factors.size(); i++)
    {
        // First get the ugly numbers involving the current factor
        // Add the current prime factor
        std::unordered_set<int> temp_set;
        temp_set.insert(factors[i]);

        // Add the product of the current factor multipling the previous products
        for (std::unordered_set<int>::iterator it = ugly_nums.begin(); it != ugly_nums.end(); it++)
        {
            temp_set.insert((*it) * factors[i]);
        }

        // Add the current set
        ugly_nums.insert(temp_set.begin(), temp_set.end());

    }
    // Add one
    ugly_nums.insert(1);

    // Check the input number is in the ugly set
    if (n > 0 && ugly_nums.find(n) != ugly_nums.end())
    {
        result = true;
    }

    return result;
}