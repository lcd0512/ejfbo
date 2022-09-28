#include  <stdio.h>
void main()
{
	for (int i = 1;i< 10;i++)
	{
		int n = 1;
		for (;n <= i;n++)
		{
			printf("%dx%d=%-2d\t", i, n, i * n);
		}
		printf("\n");
	}
}