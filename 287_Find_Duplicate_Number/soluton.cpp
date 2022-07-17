#include "header.h"

// Turn this problem to a detecting-linked-list-loop problem.
// The linked list is built this way: 
// nums[0]->nums[nums[0]]->nums[nums[nums[0]]]->...
// the linked list will start looping at the duplicat number as index.
// The rest is to detect the starting point of the loop.
int findDuplicate(vector<int>& nums)
{
    int runner1 = 0;
    int runner2 = 0;
    do
    {
        runner1 = nums[runner1];
        runner2 = nums[runner2];
        runner2 = nums[runner2];
    }
    while(nums[runner1] != nums[runner2]);

    runner2 = 0;
    while (nums[runner1] != nums[runner2])
    {
        runner1 = nums[runner1];
        runner2 = nums[runner2];
    }
    return nums[runner1];
}