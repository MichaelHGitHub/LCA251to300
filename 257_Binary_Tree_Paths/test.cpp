#include "header.h"

void PrepareTestData(vector<TD_T_VS>& testData)
{
    TD_T_VS data;

    data.input = GenerateTree({ 1,2,3,NULL_NODE_VALUE,5 });
    data.output = { "1->2->5","1->3" };
    testData.push_back(data);

    data.input = GenerateTree({ 1 });
    data.output = { "1" };
    testData.push_back(data);

}