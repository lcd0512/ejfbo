//1.strcpy
#include <stdio.h>
#include <assert.h>
void Strcpy(char* x,const char* y)//防止复制错误
{
	assert(y != NULL);//断言-为真无事发生-为假发生错误
	while (*x++ = *y++)
	{
		;
	}
}
void main()
{
	char arr[10] = { "hahahahah" };
	char arr1[]= { "hello" };
	Strcpy(arr, arr1);
	printf("%s\n", arr);
	printf("%s\n", arr1);
	int a = 10;
	const int* p = &a;
	//当const放在左边的时候修饰的是*p表示不能通过该指针修改指向内容
	//但是不会限制p值改变，可以改变地址
	int* const a1 = &a;
	//此时可通过*a1改变内容但不可以改变地址
}