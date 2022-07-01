#include "header.h"

// Definition of h-index
// 1. h in n papers have at least h citations
// 2. all others have no more than h citations.
int hIndex(vector<int>& citations)
{
    int n = citations.size();
    vector<int> compute_table(n + 1, 0);

    // calculate the number of paper whose citation is citations[i]. 
    for (int i = 0; i < n; i++)
    {
        // Because h-index is no larger than n, for papers whose citation is larger than n,
        // add the paper to compute_table[n].
        if (citations[i] >= n)
        {
            compute_table[n] += 1;
        }
        else
        {
            compute_table[citations[i]] += 1;
        }
    }

    int citation_number = 0;
    int index = n;

    // check the h index, the highest number that has at least h citations
    for (; index >= 0; index--)
    {
        citation_number += compute_table[index];

        if (citation_number >= index)
        {
            break;
        }
    }

    return index;
}