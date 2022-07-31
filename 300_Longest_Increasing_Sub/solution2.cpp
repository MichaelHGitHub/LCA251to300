#include "header.h"

// Keep only one sub sequence
// if nums[i] is larger than last element of sub, add it to the end.
// if nums[i] is less than the last element, replace the first element that is
// larger than nums[i], the sub now becomes invalid in terms of elements, but 
// the length is legitimate. this give the chance for later elements to build
// new sub without changing the legitimate length of the previous ones.
int lengthOfLIS2(vector<int>& nums)
{
    vector<int> sub;

    for (int i = 0; i < nums.size(); i++)
    {
        if (sub.size() == 0 || nums[i] > sub.back())
        {
            sub.push_back(nums[i]);
        }
        else
        {
            int begin = 0, end = sub.size() - 1;
            while (begin <= end)
            {
                int mid = (begin + end) / 2;

                if (sub[mid] == nums[i])
                {
                    break;
                }
                else if (sub[mid] > nums[i])
                {
                    end = mid - 1;
                }
                else
                {
                    begin = mid + 1;
                }
            }

            if (begin > end && begin < sub.size())
            {
                sub[begin] = nums[i];
            }
        }
    }
    return sub.size();
}