#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(int x)
{
	for (int i = 1; i <= x; i++)
	{
		int j = 0;
		for (j =1;j <= i;j++)
		{
			printf("%dx%d=%-2d\t", j, i, i * j);
		}
		printf("\n");
	}
}
void main()
{
	int n = 0;
	scanf("%d", &n);
	A(n);
}