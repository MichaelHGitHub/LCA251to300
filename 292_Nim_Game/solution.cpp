#include "header.h"
#include <unordered_map>

bool canWinNimOpt(std::unordered_map<int, bool>& record, int n);

bool canWinNim(int n)
{
    std::unordered_map<int, bool> record;
    return canWinNimOpt(record, n);
}

bool canWinNimOpt(std::unordered_map<int, bool>& record, int n)
{
    bool win = false;

    if (n < 4)
    {
        win = true;
    }
    else
    {
        if (record.find(n) != record.end())
        {
            win = record[n];
        }
        else
        {
            win = !canWinNimOpt(record, n - 1) || !canWinNimOpt(record, n - 2) || !canWinNimOpt(record, n - 3);
            record[n] = win;
        }
    }
    return win;
}