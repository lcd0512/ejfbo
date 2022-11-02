#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void P_5()
{
	int n = 0,s = 0;
	printf("‘ÀÀ„÷¡:");
	scanf("%d",&n);
	for (int i = 1; i <= n; s += pow(-1, i + 1) * i++);
	printf("sum = %d\n", s);
}