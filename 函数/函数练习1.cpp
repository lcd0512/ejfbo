#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <windows.h>
//�ж�����
int SS(int x)
{
	if (x <= 1)
	{
		return 0;
	}
	for (int x1 = 2;x1 < sqrt(x); x1++)
	{
		if (x % x1 == 0)
		{
			return 0;
		}
	}
	return 1;
}
//�ж�����
int RN(int x)
{
	if ((x%4==0&&x%100!=0)||x%400==0)
	{
		return 1;
	}
	else
	return 0;
}
//���ַ�
int EFF(int x[], int y, int z)
{
	//����arr����ʵ�ʴ��Ĳ������鱾��ֻ�Ǵ���ȥ������Ԫ�صĵ�ַ
	//int cd = sizeof(x) / sizeof(x[0]);
	int left, right,pj;
	for (left = 0,right = z-1;;)
	{
		pj = (left + right) / 2;
		if (y < pj)
		{
			right = pj;
		}
		if (y > pj)
		{
			left = pj;
		}
		if (y == pj)
		{
			return pj-1;
		}
	}
}
int JY()
{
	return 1;
}
void JY1(int* x)
{
	*x += 1;
}
int main()
{
	int b = 0;
	int mun = 0;
	int muu = 0;
	A:
	scanf("%d", &b);
	if (b == 1)
	{
		system("cls");
		mun +=JY();
		JY1(&muu);
		printf("%d %d\n", mun, muu);
		goto A;
	}
	printf("1.�ж�����\n2.�ж�����\n3.���ַ�����\n��ѡ��");
	int xz = 0;
	scanf("%d", &xz);
	system("cls");
	switch (xz)
	{
	case 1:
	{
		int a = 0;
		//����
		scanf("%d", &a);
		//���ú����ж�����������1���Ƿ���0
		if (SS(a))
			printf("������\n");
		else if (SS(a) == 0)
			printf("��������\n");
		break;
	}
	case 2:
	{
		int a = 0;
		//����
		scanf("%d", &a);
		//���ú����ж��Ƿ���1���Ƿ���0
		if (RN(a))
			printf("������\n");
		else if (RN(a) == 0)
			printf("��������\n");
		break;
	}
	case 3:
	{
		//��������
		int arr[100];
		for (int i = 0;i<100;i++)
		{
			arr[i] = i + 1;
		}
		int a = 0;
		//����
		scanf("%d", &a);
		int cd = sizeof(arr) / sizeof(arr[0]);
		printf("�±�Ϊ%d\n",EFF(arr, a,cd));
		break;
	}
	default:
		system("cls");
		main();
		break;
	}
	
	return 0;
}