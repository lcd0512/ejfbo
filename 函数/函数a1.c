#include <stdio.h>
//��������һ�����ͷ�ļ�
#include "����a1-1.h"
void main()
{
	int a = 10;
	int b = 11;
	//����������������ʱ��Ҫ����һ�±���
	int A(int, int);
	printf("%d\n",A(a, b));
	printf("%d\n", B(a, b));
}
//��������
int A(int x, int y)
{
	return x + y;
}