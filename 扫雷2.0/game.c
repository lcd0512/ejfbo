#include "game.h"
//��ʼ��
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
//������
void Intmine(char mine[ROW][COL], int row, int col)
{
	int i = 0;
	while (i < MINE)
	{
		int k = rand() % (row - 1);
		int l = rand() % (col - 1);
		if (k > 0 && k < (row-1) && l > 0 && l < (col-1))
		{
			if (mine[k][l] < '9')
			{
				mine[k][l] = '8';
				for (int k1 = k - 1; k1 <= k + 1; k1++)
				{
					for (int l1 = l - 1; l1 <= l + 1; l1++)
					{
						mine[k1][l1] = mine[k1][l1] + 1;
					}
				}
				i++;
			}
		}
	}
	
}
//�Ų���
void Finmine(char board[ROW][COL], char mine[ROW][COL],int row,int col, int x, int y)
{
	if (x > 0 && x < (row - 1) && y>0 && y < (col - 1))
	{
		if (mine[x][y]>='9')
		{
		}
		else
		{
			//������ɢ
			for (int x2 = x - 1; x2 <=x + 1; x2++)
			{
				if (x2 == x)
				{
				}
				else if (mine[x2][y] >= '9')
				{
				}
				else
				{
					if (mine[x2][y] > '0')
					{
						if (board[x2][y] != ' ')
						{
							board[x2][y] = mine[x2][y];
							if (mine[x2][y - 1] > '0' && board[x2][y - 1] == '*'&& mine[x2][y - 1] <'9')
							{
								board[x2][y - 1] = mine[x2][y - 1];
							}
							else if (mine[x2][y - 1] == '0' && board[x2][y - 1] == '*' && mine[x2][y - 1] < '9')
							{
								board[x2][y-1] = ' ';
								Finmine(board, mine, row, col, x2, y-1);
							}
							if (mine[x2][y + 1] > '0' && board[x2][y + 1] == '*' && mine[x2][y + 1] < '9')
							{
								board[x2][y + 1] = mine[x2][y + 1];
							}
							else if(mine[x2][y + 1]=='0' && board[x2][y + 1]=='*' && mine[x2][y + 1] < '9')
							{
								board[x2][y+1] = ' ';
								Finmine(board, mine, row, col, x2, y + 1);
							}
						}

					}
					else if(mine[x2][y]=='0')
					{
						if (board[x2][y] != ' ')
						{
							board[x2][y] = ' ';
							Finmine(board, mine, row, col, x2, y);
						}
					}

				}
			}
			for (int y2 = y - 1; y2 <= y + 1; y2++)
			{
				if (y2 == y)
				{
				}
				else if (mine[x][y2] >= '9')
				{
				}
				else
				{
					if (mine[x][y2] > '0')
					{
						if (board[x][y2] != ' ')
						{
							board[x][y2] = mine[x][y2];
							if (mine[x-1][y2] > '0' && mine[x - 1][y2] < '9' && board[x-1][y2] == '*')
							{
								board[x-1][y2] = mine[x-1][y2];
							}
							else if (mine[x-1][y2] == '0' && board[x-1][y2] == '*' && mine[x - 1][y2] < '9')
							{
								board[x - 1][y2] = ' ';
								Finmine(board, mine, row, col, x - 1, y2);
							}
							if (mine[x+1][y2] > '0' && mine[x + 1][y2] < '9' && board[x+1][y2] == '*')
							{
								board[x+1][y2] = mine[x+1][y2];
							}
							else if(mine[x + 1][y2] == '0' && board[x + 1][y2] == '*' && mine[x + 1][y2] < '9')
							{
								board[x + 1][y2] = ' ';
								Finmine(board, mine, row, col, x + 1, y2);
							}
						}
					}
					else if (mine[x][y2] == '0')
					{
						if (board[x][y2] != ' ')
						{
							board[x][y2] = ' ';
							Finmine(board, mine, row, col, x, y2);
						}
					}
				}
			}
		}
	}
}
//��ӡ
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
		//�ж���Ӯ
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
			printf("��Ϸʤ��\n");
			Sleep(1500);
			break;
		}
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (0 < x && x < (row - 1) && 0 < y && y < (col - 1))
		{
			if (board[x][y] != ' ')
			{
				//�ж��Ƿ�ѡ����
				if (mine[x][y] < '9')
				{
					if(mine[x][y]>'0')
					{
						board[x][y] = mine[x][y];
						if (mine[x-1][y] == '0'&& board[x - 1][y] == '*')
						{
							board[x - 1][y] = ' ';
							Finmine(board, mine, row, col, x-1, y);
						}
						if (mine[x+1][y] == '0' && board[x + 1][y] == '*')
						{
							board[x + 1][y] = ' ';
							Finmine(board, mine, row, col, x+1, y);
						}
						if (mine[x][y-1] == '0' && board[x][y-1] == '*')
						{
							board[x][y-1] = ' ';
							Finmine(board, mine, row, col, x, y-1);
						}
						if (mine[x][y+1] == '0' && board[x][y+1] == '*')
						{
							board[x][y+1] = ' ';
							Finmine(board, mine, row, col, x, y+1);
						}
					}
					else
					{
						board[x][y] = ' ';
						Finmine(board, mine, row, col, x, y);
					}
					system("cls");
					Printboard(mine, ROW, COL);
					printf("\n");
					Printboard(board, ROW, COL);
				}
				else
				{
					board[x][y] = '$';
					system("cls");
					Printboard(mine, ROW, COL);
					printf("\n");
					Printboard(board, ROW, COL);
					printf("�˴�Ϊ��\n��Ϸ����\n");
					Sleep(500);
					system("cls");
					return;
				}
			}
			else
			{
				printf("��λ���Կ���\n����������\n");
			}
		}
		else
		{
			printf("���겻�Ϸ�\n");
		}
	}
}