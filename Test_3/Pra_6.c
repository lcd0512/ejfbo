#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void P_6()
{
	int m, n;
	printf("�밴˳������m nֵ:");
	scanf("%d %d",&m, &n);
	int a = 0;
	while (m <= n)
	{
		if (m % 7 != 0 && m % 5 != 0)
			a += m;
		m++;
	}
	printf("����ֵΪ:%d\n",a);
}