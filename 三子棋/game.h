#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
//符号定义
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//函数声明
//创建棋盘
void Intboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Printboard(char board[ROW][COL],int row,int col);
//玩家下棋
void Play(char board[ROW][COL],int row, int col);
//AI下棋
void AI(char board[ROW][COL],int row, int col);
//判断输赢
char Win(char board[ROW][COL],int row, int col);
