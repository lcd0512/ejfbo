#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//strcat �ַ���׷������
void main()
{
	char arr[20] = "hello ";
	char arr1[] = "yyy";
	//Ŀ������Ҫ���㹻�ռ���׷������
	strcat(arr, arr1);
	printf("%s", arr);

}