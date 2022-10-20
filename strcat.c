#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strcat 字符串追加链接
void main()
{
	char arr[20] = "hello ";
	char arr1[] = "yyy";
	//目标数组要有足够空间存放追加内容
	strcat(arr, arr1);
	printf("%s", arr);

}