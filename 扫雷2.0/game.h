#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//���̿�
#define ROW 11
//���̸�
#define COL 11
//��
#define MINE 10
void Intsoard(char board[ROW][COL], int row, int col, char z);
void Intmine(char mine[ROW][COL],int row,int col);
void Printboard(char board[ROW][COL], int row, int col);
void Play(char board[ROW][COL],char mine[ROW][COL],int row,int col);