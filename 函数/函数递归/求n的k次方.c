#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int  A(int x, int y)
{
	int a=1;
	for (int i = 1;i<=y;i++)
	{
		a = a * x;
	}
	return a;
}
int B(int x,int y)
{
	if (y > 1)
	{
		return x * B(x,y-1);
	}
	return x;
}
void main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", A(n,k));
	printf("%d\n", B(n,k));

}