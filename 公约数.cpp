#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	a < b ? c = a : c = b;
		for (;; c--)
		{
			if (a % c == 0 && b % c == 0)
			{
				printf("���Լ��Ϊ��%d\n", c);
				break;
			}
		}
		//շת�����
		scanf("%d %d", &a, &b);
		while (c = a % b)
		{
			a = b, b = c;
		}
		printf("���Լ��Ϊ��%d\n", b);
	return 0;
}