//数组-一组相同类型的元素
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//10个整形1-10存起来
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//字符类型数组
	char ch[5] = {'a', 'b', 'c'};
	//设置5但只给予3元素-不完全化-剩下默认为0
	//数组用下标访问
	//第一个元素的下标为0
	int i = 0;
	while (i < 3)
	{
		printf("%c\n", ch[i]);
		i++;
	}
	return 0;
}