#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 2, 2, 2, 2, 2 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 1,3,4,2,2 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 3, 1, 3, 4, 2 };
    data.output = 3;
    testData.push_back(data);

}