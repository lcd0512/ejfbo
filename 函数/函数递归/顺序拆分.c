//函数递归
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(unsigned int x)
{
	if (x > 9)
	{
		A(x / 10);
	}
	printf("%u\n", x % 10);
}
int main()
{
	//printf("嘤");
	//函数自己调用自己
	//main();
	//会发生错误栈溢出-
	unsigned int a = 0;
	scanf("%d", &a);
	A(a);
	return 0;
}