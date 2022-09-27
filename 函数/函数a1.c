#include <stdio.h>
//函数声明一般放在头文件
#include "函数a1-1.h"
void main()
{
	int a = 10;
	int b = 11;
	//当函数在主函数后时需要声明一下变量
	int A(int, int);
	printf("%d\n",A(a, b));
	printf("%d\n", B(a, b));
}
//函数定义
int A(int x, int y)
{
	return x + y;
}