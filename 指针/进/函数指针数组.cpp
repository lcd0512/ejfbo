#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Nul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	
}
void main()
{
	int (*p)(int, int) = Add;
	int (*p1)(int, int) = Sub;
	//����ָ������
	int (*parr[4])(int, int) = { Add,Sub,Nul,Div };
	//������-�Ӽ��˳�
	int xz = -1;
	do
	{
		printf("1.��\n");
		printf("2.��\n");
		printf("3.��\n");
		printf("4.��\n");
		printf("\n");
		xz = -1;
		scanf("%d", &xz);
		int x = 0;
		int y = 0;
		int z = 0;
		scanf("%d %d", &x, &y);
			
		z = (parr[xz - 1])(x, y);
		printf("%d\n", z);
	} while(xz);
}
