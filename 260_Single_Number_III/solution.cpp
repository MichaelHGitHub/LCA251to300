#include "header.h"

vector<int> singleNumber(vector<int>& nums)
{
    // xor all numbers, this will eliminate all duplaction
    int x = 0;
    for (int v: nums)
    {
        x ^= v;
    }

    // find the first 1 bit in (first xor second)
    int i = 0;
    while(i < 32)
    {
        if (1 & (x >> i))
        {
            break;
        }
        ++i;
    }

    // Assume first has bit i as 1. xor all number with bit i as 1, this will
    // eliminate all duplication and find first.
    int first = 0;
    for (int v : nums)
    {
        if (1 & (v >> i))
        {
            first ^= v;
        }
    }

    // calculate second.
    int second = x ^ first;

    return { first, second };
}