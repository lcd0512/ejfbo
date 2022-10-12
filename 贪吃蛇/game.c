#include "game.h"
void print(char (*x)[COL])
{
	for (int i = 0; i < DOW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%c",*((*x+i) + j));
		}
		printf("\n");
	}
}
//初始化食物
//初始化蛇
void intsnaek(struct Snaek* X)
{
	//初始化头
	X->list[0].x = DOW;
	X->list[0].y = COL;
	//初始化尾
	X->list[1].x = DOW-1;
	X->list[1].y = COL;
	//初始化身体大小
	X->size = 2;
	//初始化食物坐标
	X->food.x = rand() % DOW;
	X->food.y = rand() % COL;
	//移动方向
	X->sx = 0;
	X->sy = -1;
	//初始化分数
	X->f = 0;
}
//打印食物
printfood(struct Snaek* X)
{
	X->coord.X = X->food.x;
	X->coord.Y = X->food.y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), X->coord);
	printf("#");
}
void printsnaek(struct Snaek* X)
{
	for (int i = 0; i < X->size; i++)
	{
		X->coord.X = X->list[i].x;
		X->coord.Y = X->list[i].y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), X->coord);
		if (i == 0)
		{
			printf("@");
		}
		else
			printf("*");
	}
	printfood(X);
}

void movesnaek(struct Snaek* X)
{
	for (int i = X->size -1;i>0;i--)
	{
		//将除蛇头外坐标更新
		X->list[i]= X->list[i-1];
	}
	//更新蛇头
	X->list[0].x += X->sx;
	X->list[0].y += X->sy;
}
void playsnaek(struct Snaek* X)
{
	char key = 0;
	while (_kbhit())
	{
		key = _getch();
	}
		switch (key)
		{
		case 'a':
		{
			X->sx = -1;
			X->sy = 0;
			break;
		}
		case 'd':
		{
			X->sx = 1;
			X->sy = 0;
			break;
		}
		case 'w':
		{
			X->sx = 0;
			X->sy = -1;
			break;
		}
		case 's':
		{
			X->sx = 0;
			X->sy = 1;
			break;
		}
		}
}
void gameover(struct Snaek* X)
{
	X->coord.X = COL / 2;
	X->coord.Y = DOW;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), X->coord);
	printf("游戏结束,分数为：%d\n", X->f);
	Sleep(2000);
	exit(0);
}
void eatsneak(struct Snaek* X)
{
	for (int i = 1; i < X->size; i++)
	{
		if (X->list[0].x == X->list[i].x && X->list[0].y == X->list[i].y)
		{
			gameover(X);
		}
	}
}
void eatfood(struct Snaek* X)
{
	if (X->list[0].x == X->food.x && X->list[0].y == X->food.y)
	{
		X->food.x = rand() % DOW;
		X->food.y = rand() % COL;
		X->size++;
		X->f++;
	}
}

void play(struct Snaek* X)
{

	while (X->list[0].x <COL+1&&X->list[0].y>0&&X->list[0].y<DOW+1&&X->list[0].y>0)
	{
		//蛇走向
		playsnaek(X);
		//蛇移动-更新坐标
		movesnaek(X);
		system("cls");
		//判断是否碰到身体
		eatsneak(X);
		//判断食物
		eatfood(X);
		printsnaek(X);
		Sleep(150);
	}
	gameover(X);
}