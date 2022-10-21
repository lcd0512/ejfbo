#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int my_strstr(const char* x,const char* y)
{
	while (*x != '\0' && *(x++) != *y);
	if (*(--x) == *y)
	{
		while (*(x++)==*(y++));
		if (*(--y) == '\0')
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
void main()
{
	char arr[] = "abcdef";
	char arr1[] = "abc";
	//在arr中查找是否包含arr1
	//返回值为地址
	char *p=strstr(arr,arr1);
	if (p == NULL)
	{
		printf("N");
	}
	else
		printf("Y");
	my_strstr(arr,arr1);
	int p1 = my_strstr(arr, arr1);
	if (p1 == 0)
	{
		printf("N");
	}
	else
		printf("Y");

	//strtok-切割字符串
	//6666@qq.com
	char arr2[] = "666@qq.com";//被分割数组
	char p2[] = "@.";//分割字符存放数组
	//strtok(arr2,p1);
	for (char* ret = strtok(arr2, p2); ret != NULL; ret = strtok(NULL, p2))
	{
		printf("%s\n", ret);
	}

	//strerror反应错误信息
	//char* strerror (int errnum)
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
}