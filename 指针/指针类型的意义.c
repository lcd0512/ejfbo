//指针类型的意义
#include <stdio.h>
void main()
{
	//1.指针类型决定了指针解引用的权限有多大能访问改变多少字节
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	*pa = 0;
	//改变了四个字节
	*pc = 0;
	//改变了一个字节

	//2.指针类型决定了指针走一步能走多远
	int arr[10] = { 0 };
	int* pp = arr;
	char* ppp = arr;
	printf("%p\n", pp);
	//按照类型字节加减
	//int加4
	printf("%p\n", pp+1);
	printf("%p\n", ppp);
	//char+1
	printf("%p\n", ppp+1);
}