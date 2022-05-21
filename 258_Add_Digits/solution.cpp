#include "header.h"

int addDigits(int num)
{
    int remain = num;
    do
    {
        int sum = 0;
        while (remain > 0)
        {
            sum += remain % 10;
            remain /= 10;
        }
        remain = sum;
    } while (remain > 9);
    return remain;
}