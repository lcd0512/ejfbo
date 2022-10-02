#include "game.h"

void game()
{
	char board[ROW][COL];
	char mine[ROW][COL];
	//创建棋盘/雷区
	Intsoard(board,ROW,COL,'*');
	Intsoard(mine, ROW, COL,'0');
	//生成雷
	Intmine(mine,ROW,COL);
	//打印
	Printboard(mine, ROW, COL);
	Printboard(board, ROW, COL);
	//玩家
	Play(board,mine,ROW,COL);
}
void main()
{
	//产生随机值
	srand((unsigned int)time(NULL));
	do
	{
		printf("1.开始游戏\n2.退出游戏\n请选择：");
		int n;
		scanf("%d", &n);
		switch (n)
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
			printf("请输入1/2");
			Sleep(250);
			system("cls");
			break;
		}
		}
	} while (1);
}