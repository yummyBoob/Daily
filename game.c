
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        int j = 0;
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
            else
                printf("\n");
        }
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                printf("|");
            }
        }
        else
            printf("\n");
    }
}