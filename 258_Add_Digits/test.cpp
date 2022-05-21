#include "header.h"

void PrepareTestData(vector<TD_I_I>& testData)
{
    TD_I_I data;

    data.input = 38;
    data.output = 2;
    testData.push_back(data);


    data.input = 0;
    data.output = 0;
    testData.push_back(data);

}