//ָ��
//һ���ֽ�Ϊһ���ڴ浥Ԫ
#include <stdio.h>
int main()
{
	//a���ڴ���Ҫ����ռ�� -4���ֽ�
	int a = 10;
	printf("%p\n", &a);
	//%p-��ӡ��ַ
	int* pa = &a;//pa��������ŵ�ַ�ģ���c������pa��ָ�����
	//*˵��pa��ָ�����
	//int˵��paִ�ж����int���͵�
	*pa = 20;
	//*�����ò�����*pa����ͨ��pa����ĵ�ַ�ҵ�a
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	//ָ���С����ͬ��
	//ָ���Ǵ�ŵ�ַ��
	//ָ����Ҫ���ռ�ȡ���ڵ�ַ�洢��Ҫ�ռ���
	//32λ 32����=4�ֽ�   64λ  64����=8�ֽ�
	return 0;
}