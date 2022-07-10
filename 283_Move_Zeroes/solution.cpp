#include "header.h"

void moveZeroes(vector<int>& nums)
{
    int zero_pos = 0;
    int pos = 0;

    while (pos < nums.size())
    {
        if (nums[pos] == 0)
        {
            if (nums[zero_pos] != 0)
            {
                zero_pos = pos;
            }
        }
        else
        {
            if (nums[zero_pos] == 0)
            {
                nums[zero_pos] = nums[pos];
                nums[pos] = 0;
                ++zero_pos;
            }
        }
        ++pos;
    }
}