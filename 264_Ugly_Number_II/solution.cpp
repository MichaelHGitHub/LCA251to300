#include "header.h"

int isUgly(int n)
{
    std::vector<long> l2, l3, l5;
    int nth_ugly = 1;
    int ugly_index = 1;

    l2.push_back(2);
    l3.push_back(3);
    l5.push_back(5);

    int grow_l2 = 0;
    int grow_l3 = 0, grow_l3_2 = 0;
    int grow_l5 = 0, grow_l5_2 = 0, grow_l5_3 = 0;

    while (ugly_index < n)
    {
        ++ugly_index;

        std::vector<long>* p_cur = (l2[l2.size() - 1] < l3[l3.size() - 1]) ? &l2 : &l3;
        p_cur = ((*p_cur)[(*p_cur).size() - 1] < l5[l5.size() - 1]) ? p_cur : &l5;
        nth_ugly = (*p_cur)[(*p_cur).size() - 1];

        if (p_cur == &l2)
        {
            l2.push_back(2 * (l2[grow_l2]));
            ++grow_l2;
        }
        else if (p_cur == &l3)
        {
            if (l2[grow_l3_2] < l3[grow_l3])
            {
                l3.push_back(3 * l2[grow_l3_2]);
                ++grow_l3_2;
            }
            else
            {
                l3.push_back(3 * l3[grow_l3]);
                ++grow_l3;
            }
        }
        else
        {
            std::vector<long>* p_grow_list = nullptr;
            int* p_grow = nullptr;

            if (l2[grow_l5_2] < l3[grow_l5_3])
            {
                p_grow_list = &l2;
                p_grow = &grow_l5_2;
            }
            else
            {
                p_grow_list = &l3;
                p_grow = &grow_l5_3;
            }

            if ((*p_grow_list)[*p_grow] > l5[grow_l5])
            {
                p_grow_list = &l5;
                p_grow = &grow_l5;
            }
            l5.push_back(5 * (*p_grow_list)[*p_grow]);
            ++(*p_grow);
        }
    }

    return nth_ugly;
}