#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int b = 0;
	for (int a = 1000; a <= 2000; a++)
	{
		//�ж�����
		//1.��4�������ܱ�100����������
		//2.�ܱ�400����
		if (a % 4 == 0)
		{
			if (a % 100 != 0)
			{
				printf("%d ", a);
				b++;
			}
		}
		if (a % 400 == 0)
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("%d��\n", b);
	//2����
	for (int a = 1000,b = 0;a <= 2000;a++)
	{
		if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		{
			printf("%d ", a);
			b++;
		}
	}
	printf("%d��", b);
	return 0;
}