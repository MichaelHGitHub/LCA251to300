#include "header.h"

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