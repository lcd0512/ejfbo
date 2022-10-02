#include "game.h"
//初始化
void Intsoard(char board[ROW][COL], int row, int col, char z)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = z;
		}
	}
}
//生成雷
void Intmine(char mine[ROW][COL], int row, int col)
{
	int i = 0;
	while (i < MINE)
	{
		int k = rand() % (row - 1);
		int l = rand() % (col - 1);
		if (k > 0 && k < (row-1) && l > 0 && l < (col-1))
		{
			if (mine[k][l] == '0')
			{
				mine[k][l] = '$';
				i++;
			}
		}
	}
	
}
//排查雷
void Finmine(char board[ROW][COL], char mine[ROW][COL],int row,int col, int x, int y)
{
	if (x > 0 && x < (row - 1) && y>0 && y < (col - 1))
	{
		if (mine[x][y - 1] == '$' || mine[x][y + 1] == '$' || mine[x - 1][y - 1] == '$' || mine[x + 1][y + 1] == '$' || mine[x - 1][y] == '$' || mine[x + 1][y] == '$' || mine[x - 1][y + 1] == '$' || mine[x + 1][y - 1] == '$')
		{
			//扫描周围雷个数
			int s = 0;
			for (int x1 = x - 1, y1 = y - 1; x1 <= x + 1; x1++)
			{
				for (y1 = y - 1; y1 <= y + 1; y1++)
				{
					{
						if (mine[x1][y1] == '$')
							s++;
					}
				}
			}
			if (s != 0)
			{
				board[x][y] = '0' + s;
			}
		}
		else
		{
			//进行扩散
			for (int x2 = x - 1; x2 <=x + 1; x2++)
			{
				if (x2 == x)
				{
				}
				else
				{
					if(board[x2][y]!=' ')
					{
						board[x2][y] = ' ';
						Finmine(board, mine, row, col, x2, y);
					}
				}
			}
			for (int y2 = y - 1; y2 <= y + 1; y2++)
			{
				if (y2 == y)
				{
				}
				else
				{
					if(board[x][y2]!=' ')
					{
						board[x][y2] = ' ';
						Finmine(board, mine, row, col, x, y2);
					}
				}
			}
		}
	}
}
//打印
void Printboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || i == (row-1))
			{
				if (j == 0)
				{
					printf("\t+");
				}
				else if (j == (col-1))
				{
					printf("-+");
				}
				else if(i == 0)
				{
					printf("-%d",j);
				}
				else
				{
					printf("--");
				}
			}
			else
			{
				if (j == 0)
				{
					printf("\t%d",i);
				}
				else if (j == (col - 1))
				{
					printf(" |");
				}
				else
				{
					printf(" %c",board[i][j]);
				}
			}
		}
		printf("\n");
	}
}
void Play(char board[ROW][COL], char mine[ROW][COL], int row, int col)
{
	int x, y;
	while (1)
	{
		//判断输赢
		int a = 0;
		for (int x1 = 1; x1 <= (row-2); x1++)
		{
			for (int y1 = 1; y1 <= (col-2); y1++)
			{
				if (board[x1][y1] == '*')
				{
					a++;
				}
			}
		}
		if (a == MINE)
		{
			printf("游戏胜利\n");
			Sleep(1500);
			break;
		}
		printf("请输入坐标：\n");
		scanf("%d %d", &x, &y);
		//判断坐标是否合法
		if (0 < x && x < (row - 1) && 0 < y && y < (col - 1))
		{
			if (board[x][y] != ' ')
			{
				//判断是否选中雷
				if (mine[x][y] != '$')
				{
					board[x][y] = ' ';
					Finmine(board, mine,row,col, x, y);
					system("cls");
					Printboard(mine, ROW, COL);
					printf("\n");
					Printboard(board, ROW, COL);
				}
				else
				{
					board[x][y] = mine[x][y];
					system("cls");
					Printboard(mine, ROW, COL);
					printf("\n");
					Printboard(board, ROW, COL);
					printf("此处为雷\n游戏结束\n");
					Sleep(500);
					system("cls");
					return;
				}
			}
			else
			{
				printf("该位置以开启\n请重新输入\n");
			}
		}
		else
		{
			printf("坐标不合法\n");
		}
	}
}