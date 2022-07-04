#include "header.h"

namespace
{
    TD_I_I_I g_TestData;
}

bool isBadVersion(int n);

int firstBadVersion(int n) {

    long r = 1, l = n;
    int b = 0;

    while (r <= l)
    {
        int mid = (r + l) / 2;

        if (isBadVersion(mid))
        {
            b = mid;
            l = mid - 1;
        }
        else
        {
            r = mid + 1;
        }
    }

    return b;

}

void SetTestData(TD_I_I_I& testData)
{
    g_TestData = testData;
}

bool isBadVersion(int n)
{
    return n == g_TestData.input2;
}