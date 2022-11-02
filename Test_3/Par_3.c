#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void P_3()
{
	int i = 1;
	printf("while:");
	while (i <= 100)
	{
		if (i % 7 == 0)
			printf("%d ",i);
		i++;
	}
	printf("\nfor:  ");
	for (i = 1; i <= 100; i++)
	{
		if (i % 7 == 0)
			printf("%d ",i);
	}
	printf("\n");
}