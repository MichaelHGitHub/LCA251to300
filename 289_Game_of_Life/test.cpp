#include "header.h"

void PrepareTestData(vector<TD_VVI_VVI>& testData)
{
    TD_VVI_VVI data;

    data.input = { {1, 1}, {1, 0} };
    data.output = { {1, 1}, {1, 1} };
    testData.push_back(data);

    data.input = {{0, 1, 0}, {0, 0, 1}, {1, 1, 1}, {0, 0, 0}};
    data.output = {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {0, 1, 0}};
    testData.push_back(data);


}