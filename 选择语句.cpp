//ѡ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("�ǲ���(1/0)?>:");
	//��ȡ����ֵ
	scanf("%d", &a);
	//�ж�����ֵ
	if (a == 1) {
		//������ֵ����1ʱ
		printf("��\n");
	}
	//����
	else
	{
		if (a == 0) {
			//������ֵ������1����0ʱ
			printf("����");
		}
		//������ֵ������1��0ʱ
		else {
			printf("������1/0");
		}
	}
	return 0;
}