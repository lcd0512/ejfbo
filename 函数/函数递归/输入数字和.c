#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int DigitSum(int x)
{
	if (x > 9)
	{
		return x%10 + DigitSum(x / 10);
	}
	return x;
}
void main()
{
	int Sum;
	scanf("%d", &Sum);
	printf("%d\n", DigitSum(Sum));
}