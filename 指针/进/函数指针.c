#include <stdio.h>
int test(int x, int y)
{
	return x + y;
}
void main()
{
	//����ָ��-��ź�����ַ��ָ��
	//������==&������
	int(*p)(int,int) = &test;
	printf("%p\n", &test);
	printf("%p\n", test);
	printf("%d\n",(*p)(5, 5));
	//test==p
	printf("%d\n",p(5, 5));
}