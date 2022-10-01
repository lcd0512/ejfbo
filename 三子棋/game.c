#include "game.h"
//初始化输入空格
void Intboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印函数
void Printboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		if (i < row - 1)
		{
			printf("\n");
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("-");
				}
			}
			printf("\n");
		}
	}
}
//玩家操作
void Play(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("玩家开始操作：\n");
		printf("请输入坐标：\n");
		int x, y;
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (0 <= x - 1 && x - 1 < row && 0 <= y - 1 && y - 1 < col)
		{
			//坐标合法后判断坐标是否有棋子
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				system("cls");
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
}
//电脑操作
void AI(char board[ROW][COL], int row, int col)
{
	printf("电脑开始操作：\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			system("cls");
			break;
		}
	}
}
//判断输赢
char Win(char board[ROW][COL], int row, int col)
{
	//判断行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	//若前面都不满足既为棋盘满子且无人获胜
	return 'Q';
}