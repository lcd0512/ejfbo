#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	char arr[20] = "abcdef";
	char arr1[] = "ghijk";
	//1-被输入数组2-被复制数组3-复制个数
	strncpy(arr,arr1,2);
	printf("%s\n", arr);
	//追加个数
	strncat(arr,arr1,2);
	printf("%s\n", arr);
	//比较个数
	printf("%d\n", strncmp(arr, arr1, 3));
}