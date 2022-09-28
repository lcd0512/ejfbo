#include <stdio.h>
#include <string.h>
int A(char* x)
{
	int a = 0;
	while (*x != '\0')
	{
		a++, x++;
	}
	return a;
}
int B(char* x)
{
	if (*x != '\0')
	{
		return 1 + B(x + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "hello";
	printf("%d\n", strlen(arr));
	//模拟实现strlen函数
	printf("%d\n", A(arr));
	printf("%d\n", B(arr));
}