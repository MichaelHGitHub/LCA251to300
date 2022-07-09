#include "header.h"
#include <math.h>
#include <unordered_map>

static int LestNumSquares(unordered_map<int,int>& history, vector<int>& squares, int sum);

int numSquares(int n)
{
    // We need an array of squares to check, the last element we need is largest square
    // equal or smaller than n.
    int seed = sqrt(n);
    vector<int> squares(seed + 1, 0);

    for (int i = 1; i < squares.size(); i++)
    {
        squares[i] = i * i;
    }

    // Keep an history to reduce calculation
    unordered_map<int, int> history;

    return LestNumSquares(history, squares, n);
}

int LestNumSquares(unordered_map<int, int>& history, vector<int>& squares, int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (history.find(n) != history.end())
    {
        return history[n];
    }

    int lest_num = INT_MAX;

    // Start from each of the place in squares array calculate its number, keep the smallest one.
    for (int i = squares.size() - 1; i > 0; i--)
    {
        int num = 0;
        int sum = n;

        if (squares[i] > sum)
        {
            continue;
        }

        num = (sum / squares[i]);
        sum %= squares[i];

        num += LestNumSquares(history, squares, sum);

        if (lest_num > num)
        {
            lest_num = num;
        }
    }
    history[n] = lest_num;

    return lest_num;
}