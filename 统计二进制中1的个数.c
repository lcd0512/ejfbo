#include <stdio.h>
int Number(int x)
{
	int y = 0;
	if (x < 0)
	{
		x = -x;
		y++;
	}
	while (x)
	{
		if (x % 2==1)
		{
			y++;
		}
		x /= 2;
	}
	return y;
}
int Number1(unsigned int x)
{
	int y = 0;
	while (x)
	{
		if (x % 2==1)
		{
			y++;
		}
		x /= 2;
	}
	return y;
}
int Number2(int x)
{
	int y = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((x>>i) & 1)
		{
			y++;
		}
	}
	return y;
}
int Number3(int x)
{
	int y = 0;
	while (x)
	{
		x = x & (x - 1);//可用来检查是否是二的n次方
		y++;
	}
	return y;
}
void main()
{
	int n = -3;
	printf("%d\n",Number(n));
	printf("%d\n",Number1(n));
	printf("%d\n",Number2(n));
	printf("%d\n",Number3(n));
}