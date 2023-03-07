#define ROW 3
#define COL 3
#include <stdio.h>
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
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
        
            
    }
}
// #include "game.h"
void game()
{
    char board[ROW][COL] = {0};
    InitBoard(board, ROW, COL);
    DisPlayBoard(board, ROW, COL);
}
void manu()
{
    int input = 0;
    do
    {
        printf("**********************\n");

        printf("****1、play 0、exit****\n");

        printf("**********************\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("五子棋!\n");
            game();
            break;
        case 0:
            printf("退出游戏!");
            break;
        default:
            break;
        }
    } while (input);
}
int main()
{
    manu();
    printf("请选择->");
    return 0;
}