#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
void main()
{
	char arr[20] = "abcdef";
	char arr1[] = "ghijk";
	//1-����������2-����������3-���Ƹ���
	strncpy(arr,arr1,2);
	printf("%s\n", arr);
	//׷�Ӹ���
	strncat(arr,arr1,2);
	printf("%s\n", arr);
	//�Ƚϸ���
	printf("%d\n", strncmp(arr, arr1, 3));
}