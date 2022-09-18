//指针
//一个字节为一个内存单元
#include <stdio.h>
int main()
{
	//a在内存中要分配空间的 -4个字节
	int a = 10;
	printf("%p\n", &a);
	//%p-打印地址
	int* pa = &a;//pa是用来存放地址的，在c语言中pa叫指针变量
	//*说明pa是指针变量
	//int说明pa执行对象的int类型的
	*pa = 20;
	//*解引用操作，*pa就是通过pa里面的地址找到a
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//指针大小是相同的
	//指针是存放地址的
	//指针需要多大空间取决于地址存储需要空间多大
	//32位 32比特=4字节   64位  64比特=8字节
	return 0;
}