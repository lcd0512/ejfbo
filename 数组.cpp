//����-һ����ͬ���͵�Ԫ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//10������1-10������
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//�ַ���������
	char ch[5] = {'a', 'b', 'c'};
	//����5��ֻ����3Ԫ��-����ȫ��-ʣ��Ĭ��Ϊ0
	//�������±����
	//��һ��Ԫ�ص��±�Ϊ0
	int i = 0;
	while (i < 3)
	{
		printf("%c\n", ch[i]);
		i++;
	}
	return 0;
}