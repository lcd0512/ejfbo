#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//递归可以求解但效率低
int A(int x)
{
	if (x <= 2) {
		return 1;
	}
	if (x > 2)
	{
		return A(x - 1) + A(x - 2);
	}
}
int B(int x)
{
	//迭代
	int a = 1, b = 1, c =1;
	while (x>2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
void main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",A(n));
	printf("%d\n",B(n));

}