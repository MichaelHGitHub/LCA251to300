#include "header.h"

void PrepareTestData(vector<TD_S_S_B>& testData)
{
    TD_S_S_B data;

    data.input = "abba";
    data.input2 = "dog dog dog dog";
    data.output = false;
    testData.push_back(data);

    data.input = "abba";
    data.input2 = "dog cat cat dog";
    data.output = true;
    testData.push_back(data);

    data.input = "abba";
    data.input2 = "dog cat cat fish";
    data.output = false;
    testData.push_back(data);

    data.input = "aaaa";
    data.input2 = "dog cat cat dog";
    data.output = false;
    testData.push_back(data);
}