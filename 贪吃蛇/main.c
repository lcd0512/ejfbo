#include "game.h"
void game()
{
	//创建地图
	char borad[DOW][COL]={0};
	//初始化地图
	for (int i = 0; i < DOW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			borad[i][j] = ' ';
		}
	}
	//棋盘
	print(&borad);
	//初始化蛇
	struct Snaek* snaek;
	snaek = (struct Snaek*)malloc(sizeof(struct Snaek));
	intsnaek(snaek);
	//打印
	printsnaek(snaek);
	Sleep(1000);
	//开始
	play(snaek);
}
void main()
{
	//创建随机数
	srand((unsigned int )time(NULL));
		int xz = 0;
		printf("1.开始游戏\n2.退出游戏\n");
		scanf("%d", &xz);
		switch (xz)
		{
		case 1:
		{
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
}