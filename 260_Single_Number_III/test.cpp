#include "header.h"

void PrepareTestData(vector<TD_VI_VI>& testData)
{
    TD_VI_VI data;

    data.input = { 1,2,1,3,2,5 };
    data.output = { 3,5 };
    testData.push_back(data);

    data.input = { -1,0 };
    data.output = { -1,0 };
    testData.push_back(data);

    data.input = { 0,1 };
    data.output = { 0,1 };
    testData.push_back(data);
}