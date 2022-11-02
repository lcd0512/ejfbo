#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

void P_4()
{
	for (int i = 1; i <= 1000; i++)
	{
		int n = 1,s = 0;
		for (int j = i; j /= 10; n++);
		for (int j = i; j; j /= 10)
			s += pow((j % 10),n);
		if (i == s)
			printf("%d ",i);
	}
	printf("\n");
}