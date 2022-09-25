#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int b = 0;
	for (int a = 1000; a <= 2000; a++)
	{
		//判断闰年
		//1.被4整除不能被100整除是闰年
		//2.能被400整除
		if (a % 4 == 0)
		{
			if (a % 100 != 0)
			{
				printf("%d ", a);
				b++;
			}
		}
		if (a % 400 == 0)
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("%d个\n", b);
	//2方法
	for (int a = 1000,b = 0;a <= 2000;a++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("%d个", b);
	return 0;
}