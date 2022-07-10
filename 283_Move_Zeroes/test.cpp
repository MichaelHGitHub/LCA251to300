#include "header.h"

void PrepareTestData(vector<TD_VI_VI>& testData)
{
    TD_VI_VI data;

    data.input = { 0,1,0,3,12 };
    data.output = { 1,3,12,0,0 };
    testData.push_back(data);

    data.input = { 0 };
    data.output = { 0 };
    testData.push_back(data);
}