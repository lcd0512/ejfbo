#include <stdio.h>
//������ԭ��
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
//ָ��
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
	//arr[2]����������ʱ��ᱻת��Ϊ*P��arr+2����arr[2]��2[arr]����һ��
}