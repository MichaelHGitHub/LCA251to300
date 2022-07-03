#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 4, 4 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 0, 0 };
    data.output = 0;
    testData.push_back(data);

    data.input = { 0, 0, 4, 4 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 1, 2 };
    data.output = 1;
    testData.push_back(data);

    data.input = { 0,1,3,5,6 };
    data.output = 3;
    testData.push_back(data);

    data.input = { 1,2,100 };
    data.output = 2;
    testData.push_back(data);

    data.input = { 100 };
    data.output = 1;
    testData.push_back(data);


}