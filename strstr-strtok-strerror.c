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
	//��arr�в����Ƿ����arr1
	//����ֵΪ��ַ
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

	//strtok-�и��ַ���
	//6666@qq.com
	char arr2[] = "666@qq.com";//���ָ�����
	char p2[] = "@.";//�ָ��ַ��������
	//strtok(arr2,p1);
	for (char* ret = strtok(arr2, p2); ret != NULL; ret = strtok(NULL, p2))
	{
		printf("%s\n", ret);
	}

	//strerror��Ӧ������Ϣ
	//char* strerror (int errnum)
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));
}