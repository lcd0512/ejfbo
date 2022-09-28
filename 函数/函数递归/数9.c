#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int n = 0;
	for (int i = 1; i <= 100; i++)
	{
		if ((i / 10 == 9) || (i % 10 == 9))
		{
			n++;
		}
	}
	printf("%d\n", n);
}