#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data;

    data.input = 43;
    data.output = 3;
    testData.push_back(data);

    data.input = 12;
    data.output = 3;
    testData.push_back(data);

    data.input = 13;
    data.output = 2;
    testData.push_back(data);
}