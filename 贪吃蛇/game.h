#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <malloc.h>
#include <conio.h>
#define DOW 25
#define COL 25
void print(char(*x)[COL]);
void intsnaek(struct Snaek *X);
void printsnaek(struct Snaek* X);
void play(struct Snaek* X);
//��������
//��������
struct BOD
{
	int x;
	int y;
};
//������
struct Snaek
{
	struct BOD list[DOW * COL];
	int size;
	struct BOD food;
	COORD coord;
	int sx;
	int sy;
	int f;
};

