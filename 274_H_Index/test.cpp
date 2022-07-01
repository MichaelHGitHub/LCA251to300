#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 3,0,6,1,5 };
    data.output = 3;
    testData.push_back(data);

    data.input = { 1,3,1 };
    data.output = 1;
    testData.push_back(data);
}