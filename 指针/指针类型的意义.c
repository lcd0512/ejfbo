//ָ�����͵�����
#include <stdio.h>
void main()
{
	//1.ָ�����;�����ָ������õ�Ȩ���ж���ܷ��ʸı�����ֽ�
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	*pa = 0;
	//�ı����ĸ��ֽ�
	*pc = 0;
	//�ı���һ���ֽ�

	//2.ָ�����;�����ָ����һ�����߶�Զ
	int arr[10] = { 0 };
	int* pp = arr;
	char* ppp = arr;
	printf("%p\n", pp);
	//���������ֽڼӼ�
	//int��4
	printf("%p\n", pp+1);
	printf("%p\n", ppp);
	//char+1
	printf("%p\n", ppp+1);
}