#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����������/������
typedef union Aa
{
	int x;
	char y;
}Aa;

typedef union Bb
{
	char z[5];
	int x;
};
void main()
{
	Aa a;
	printf("%d\n", sizeof(a));//4
	printf("%p\n", &a);
	printf("%p\n", &(a.x));
	printf("%p\n", &(a.y));
	//������ַһ��һ��
	//����ͬһ��ռ�-��С��С����������ֽڴ�С

//�����жδ��С��
	a.x= 1;
	if (a.y == 1)
		printf("С��\n");
	else
		printf("���\n");

	//���������
	//Bb-char[5]ռ5���ֽ�-intΪ4�ֽڷ�4��������8
}