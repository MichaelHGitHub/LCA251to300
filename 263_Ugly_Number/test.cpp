#include "header.h"

void PrepareTestData(vector<TD_I_B>& testData)
{
    TD_I_B data;

    data.input = 6;
    data.output = true;
    testData.push_back(data);

    data.input = 1;
    data.output = true;
    testData.push_back(data);

    data.input = 14;
    data.output = false;
    testData.push_back(data);

    data.input = 8;
    data.output = true;
    testData.push_back(data);

    data.input = 0;
    data.output = false;
    testData.push_back(data);
}