//�����ݹ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(unsigned int x)
{
	if (x > 9)
	{
		A(x / 10);
	}
	printf("%u\n", x % 10);
}
int main()
{
	//printf("��");
	//�����Լ������Լ�
	//main();
	//�ᷢ������ջ���-
	unsigned int a = 0;
	scanf("%d", &a);
	A(a);
	return 0;
}