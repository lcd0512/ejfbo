#include "game.h"
//��ʼ������ո�
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
//��ӡ����
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
//��Ҳ���
void Play(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("��ҿ�ʼ������\n");
		printf("���������꣺\n");
		int x, y;
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (0 <= x - 1 && x - 1 < row && 0 <= y - 1 && y - 1 < col)
		{
			//����Ϸ����ж������Ƿ�������
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				system("cls");
				break;
			}
			else
			{
				printf("���걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
}
//���Բ���
void AI(char board[ROW][COL], int row, int col)
{
	printf("���Կ�ʼ������\n");
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
//�ж���Ӯ
char Win(char board[ROW][COL], int row, int col)
{
	//�ж���
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
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
	//��ǰ�涼�������Ϊ�������������˻�ʤ
	return 'Q';
}