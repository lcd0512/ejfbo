#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
//���Ŷ���
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//��������
//��������
void Intboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Printboard(char board[ROW][COL],int row,int col);
//�������
void Play(char board[ROW][COL],int row, int col);
//AI����
void AI(char board[ROW][COL],int row, int col);
//�ж���Ӯ
char Win(char board[ROW][COL],int row, int col);
