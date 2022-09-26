#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <windows.h>
//判断素数
int SS(int x)
{
	if (x <= 1)
	{
		return 0;
	}
	for (int x1 = 2;x1 < sqrt(x); x1++)
	{
		if (x % x1 == 0)
		{
			return 0;
		}
	}
	return 1;
}
//判断闰年
int RN(int x)
{
	if ((x%4==0&&x%100!=0)||x%400==0)
	{
		return 1;
	}
	else
	return 0;
}
//二分法
int EFF(int x[], int y, int z)
{
	//数组arr传参实际传的不是数组本身，只是传过去数组首元素的地址
	//int cd = sizeof(x) / sizeof(x[0]);
	int left, right,pj;
	for (left = 0,right = z-1;;)
	{
		pj = (left + right) / 2;
		if (y < pj)
		{
			right = pj;
		}
		if (y > pj)
		{
			left = pj;
		}
		if (y == pj)
		{
			return pj-1;
		}
	}
}
int JY()
{
	return 1;
}
void JY1(int* x)
{
	*x += 1;
}
int main()
{
	int b = 0;
	int mun = 0;
	int muu = 0;
	A:
	scanf("%d", &b);
	if (b == 1)
	{
		system("cls");
		mun +=JY();
		JY1(&muu);
		printf("%d %d\n", mun, muu);
		goto A;
	}
	printf("1.判断素数\n2.判断闰年\n3.二分法查找\n请选择：");
	int xz = 0;
	scanf("%d", &xz);
	system("cls");
	switch (xz)
	{
	case 1:
	{
		int a = 0;
		//输入
		scanf("%d", &a);
		//调用函数判断是素数返回1不是返回0
		if (SS(a))
			printf("是素数\n");
		else if (SS(a) == 0)
			printf("不是素数\n");
		break;
	}
	case 2:
	{
		int a = 0;
		//输入
		scanf("%d", &a);
		//调用函数判断是返回1不是返回0
		if (RN(a))
			printf("是闰年\n");
		else if (RN(a) == 0)
			printf("不是闰年\n");
		break;
	}
	case 3:
	{
		//创建数组
		int arr[100];
		for (int i = 0;i<100;i++)
		{
			arr[i] = i + 1;
		}
		int a = 0;
		//输入
		scanf("%d", &a);
		int cd = sizeof(arr) / sizeof(arr[0]);
		printf("下标为%d\n",EFF(arr, a,cd));
		break;
	}
	default:
		system("cls");
		main();
		break;
	}
	
	return 0;
}