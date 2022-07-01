#include "header.h"

void PrepareTestData(vector<TD_VI_I>& testData)
{
    TD_VI_I data;

    data.input = { 3,0,1 };
    data.output = 2;
    testData.push_back(data);


    data.input = { 0,1 };
    data.output = 2;
    testData.push_back(data);


    data.input = { 9,6,4,2,3,5,7,0,1 };
    data.output = 8;
    testData.push_back(data);

}