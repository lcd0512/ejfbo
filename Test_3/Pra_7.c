#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void P_7()
{
	int n = 0;
	while (!(n % 2 == 1 && n % 3 == 2 && n % 5 == 4 && n % 6 == 5 && n % 7 == 0) && (n += 7));
	printf("½×ÌÝÊýÎª:%d\n",n);
}