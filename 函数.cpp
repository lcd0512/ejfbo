//����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int F(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//��ͨ�Ӽ�
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//int c = a + b;
	//printf("%d\n", c);
	//��������
	int c = F(a, b);
	printf("%d", c);
	return 0;
}