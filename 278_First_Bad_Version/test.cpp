#include "header.h"

void PrepareTestData(vector<TD_I_I_I>& testData)
{
    TD_I_I_I data;

    data.input = 5;
    data.input2 = 4;
    data.output = 4;
    testData.push_back(data);

    data.input = 1;
    data.input2 = 1;
    data.output = 1;
    testData.push_back(data);
}