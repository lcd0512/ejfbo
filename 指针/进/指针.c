//1.�ַ�ָ��
//2.����ָ��
//3.ָ������
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص����� 

#include <stdio.h>
void main()
{
	char ch = 'a';
	char* p = &ch;
	char* p1 = "hello";//�����ַ���ַ����p1
	char arr[] = "hello";
	char* p2 = arr;
	printf("%s\n", p1);
	printf("%s\n", p2);

	char arr1[] = "hello";
	if (arr == arr1)//��ͬ�����ַ��һ��
		printf("Y\n");
	else
		printf("N\n");
	char* a1 = "hello";//���ǳ���-�������׵�ַ
	char* a2 = "hello";
	if (a1 == a2)
		printf("Y\n");
	else
		printf("N\n");
	//*a1=hhhu;�޷��޸���Ϊ��Ϊ�ַ������� 
}