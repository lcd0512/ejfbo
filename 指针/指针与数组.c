#include <stdio.h>
//计数器原理
int Strlen(char* arr)
{
	int y = 0;
	while (*arr != '\0')
	{
		arr++;
		y++;
	}
	return y;
}
//指针
int Strlen1(char* arr)
{
	char* arr1 = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	return arr - arr1;
}
void main()
{
	int sz = Strlen("abc");
	printf("%d\n",sz);
	sz = Strlen1("abc");
	printf("%d\n", sz);
	//arr[2]这种在运算时候会被转化为*P（arr+2）故arr[2]与2[arr]意义一样
}