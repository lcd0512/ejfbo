#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void game()
{
	//创建二维数组储存棋盘
	char board[ROW][COL];
	//初始化数组
	Intboard(board,ROW,COL);
	//打印棋盘
	Printboard(board,ROW,COL);
	//玩家与ai
	char ret;
	while (1)
	{
		//玩家
		Play(board, ROW, COL);
		Printboard(board, ROW, COL);
		//判断是否赢
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
		printf("\n玩家获胜");
		Sleep(250);
	}
	else if (ret == '#')
	{
		printf("\n电脑获胜");
		Sleep(250);
	}
	else
	{
		printf("\n平局");
		Sleep(250);
	}
}
void main()
{
	do
	{
		system("cls");
		printf("\t1.开始游戏\n");
		printf("\t2.退出游戏\n");
		int k;
		//产生随机值
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
			printf("请输入1/2\n");
			break;
		}
		}
	} while (1);
}