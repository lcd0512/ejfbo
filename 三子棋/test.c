#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void game()
{
	//������ά���鴢������
	char board[ROW][COL];
	//��ʼ������
	Intboard(board,ROW,COL);
	//��ӡ����
	Printboard(board,ROW,COL);
	//�����ai
	char ret;
	while (1)
	{
		//���
		Play(board, ROW, COL);
		Printboard(board, ROW, COL);
		//�ж��Ƿ�Ӯ
		ret = Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//AI
		AI(board,ROW,COL);
		Printboard(board, ROW, COL);
		ret = Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("\n��һ�ʤ");
		Sleep(250);
	}
	else if (ret == '#')
	{
		printf("\n���Ի�ʤ");
		Sleep(250);
	}
	else
	{
		printf("\nƽ��");
		Sleep(250);
	}
}
void main()
{
	do
	{
		system("cls");
		printf("\t1.��ʼ��Ϸ\n");
		printf("\t2.�˳���Ϸ\n");
		int k;
		//�������ֵ
		srand((unsigned int)time(NULL));
		scanf("%d", &k);
		switch (k)
		{
		case 1:
		{
			system("cls");
			game();
			break;
		}
		case 2:
		{
			return;
			break;
		}
		default:
		{
			printf("������1/2\n");
			break;
		}
		}
	} while (1);
}