//1.strcpy
#include <stdio.h>
#include <assert.h>
void Strcpy(char* x,const char* y)//��ֹ���ƴ���
{
	assert(y != NULL);//����-Ϊ�����·���-Ϊ�ٷ�������
	while (*x++ = *y++)
	{
		;
	}
}
void main()
{
	char arr[10] = { "hahahahah" };
	char arr1[]= { "hello" };
	Strcpy(arr, arr1);
	printf("%s\n", arr);
	printf("%s\n", arr1);
	int a = 10;
	const int* p = &a;
	//��const������ߵ�ʱ�����ε���*p��ʾ����ͨ����ָ���޸�ָ������
	//���ǲ�������pֵ�ı䣬���Ըı��ַ
	int* const a1 = &a;
	//��ʱ��ͨ��*a1�ı����ݵ������Ըı��ַ
}