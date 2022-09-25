#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DX(int x, int y) {
	if(x > y) {
		int d = x;
		x = y;
		y = x;
	}
	return x, y;
}
int main()
{
	//比较大小
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		int d = a;
		a = b;
		b = d;
	}
	if (b > c) {
		int d = b;
		b = c;
		c = d;
	}
	if (a > b) {
		int d = a;
		a = b;
		b = d;
	}
	printf("%d %d %d\n", a, b, c);
	scanf("%d %d %d", &a, &b, &c);
	DX(a, b);
	DX(b, c);
	DX(a, b);
	printf("%d %d %d\n", a, b, c);
	//打印3的倍数
	for (i = 1; i <= 100; i++)
	{
		if(i % 3 == 0)
		{
			printf("%d", i);
		}
	}
	return 0;
}