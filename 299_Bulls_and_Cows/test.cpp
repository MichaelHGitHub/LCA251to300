#include "header.h"

void PrepareTestData(vector<TD_S_S_S>& testData)
{
    TD_S_S_S data;

    data.input = "1807";
    data.input2 = "7810";
    data.output = "1A3B";
    testData.push_back(data);

    data.input = "1123";
    data.input2 = "0111";
    data.output = "1A1B";
    testData.push_back(data);

}