#include <stdio.h>
void print(int arr[3][5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print1(int (*arr)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

void main()
{
	//����ָ��
	//��һ��ָ��-ָ�������ָ��
	int a = 10;
	int* p = &a;
	char ch = 'w';
	char* pc = &ch;
	int arr[10] = { 1,2,3,4,5 };
	//arr-��arr[0]�ĵ�ַ
	int(*parr)[10] = &arr; 
	//parr����ָ��

	double* d[5]={1,2,3,4,5};
	double* (*pd)[5] = &d;

	//��������������Ԫ�صĵ�ַ
	//����������
	//1.sizeof(������)��������ʾ�������飬����������������С����λ���ֽ�
	//2.&������-��������ʾ�������飬ȡ��������������ĵ�ַ

	int brr[5] = { 1,2,3,4,5 };
	int(*br)[5] = &brr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *((*br)+i));
	}
	int crr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
	//һά������������ʾ��Ԫ�ص�ַ
	//��ά������������ʾ��һ�е�ַ
	print(crr, 3, 5);
	print1(crr, 3, 5);

	// int(*arr)[10];//����ָ�룬�ܹ�ָ��һ�����飬������10��Ԫ�أ�����Ϊint
	//int (*arr[10])[5];arr[10]Ϊ�������ָ��������ܴ��10������ָ�룬ÿ������ָ����ָ��һ����������5��Ԫ������Ϊint
}