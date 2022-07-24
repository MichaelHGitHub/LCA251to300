#include "header.h"

// If a live cell dies, temporarily set it to 2
// If a dead cell is reborn, temporarily set it to -1
void gameOfLife(vector<vector<int>>& board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            int sum = 0;
            for (int k = i - 1; k < i + 2; k++)
            {
                for (int l = j - 1; l < j + 2; l++)
                {
                    if (l >= 0 && l < board[i].size() && k >= 0 && k < board.size())
                    {
                        if (!(k == i && l == j) && board[k][l] > 0)
                        {
                            ++sum;
                        }
                    }
                }
            }

            if (board[i][j] == 0 && sum == 3)
            {
                board[i][j] = -1;
            }
            else if (board[i][j] == 1 && (sum > 3 || sum < 2))
            {
                board[i][j] = 2;
            }
        }
    }


    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == -1)
            {
                board[i][j] = 1;
            }
            else if (board[i][j] == 2)
            {
                board[i][j] = 0;
            }
        }
    }
}