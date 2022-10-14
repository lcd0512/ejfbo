#include <stdio.h>
int test(int x, int y)
{
	return x + y;
}
void main()
{
	//函数指针-存放函数地址的指针
	//函数名==&函数名
	int(*p)(int,int) = &test;
	printf("%p\n", &test);
	printf("%p\n", test);
	printf("%d\n",(*p)(5, 5));
	//test==p
	printf("%d\n",p(5, 5));
}