#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//sqrt-开平方函数-引用
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		int a = 0;
		for (a=2; a < i; a++)
		{
			if (i % a == 0)
			{
				break;
			}
		}
		if (i == a)
		{
			printf("%d ", i);
		}
	}
	//2
	for (int i = 1; i <= 100; i++)
	{
		int a = 0;
		int c = 1;
		for (a = 2; a <= sqrt(i); a++)
		{
			if (i % a == 0)
			{
				c = 0;
				break;
			}
		}
		if (c ==1)
		{
			printf("%d ", i);
		}
	}
	//3.
	//跳过偶数
	for (int i = 1; i <= 100; i+=2)
	{
		int a = 0;
		int c = 1;
		for (a = 2; a <= sqrt(i); a++)
		{
			if (i % a == 0)
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}