#include <stdio.h>
#include <stdlib.h>
//��̬�ڴ�
typedef struct Str
{
	int arr[1000];
	int x;
	int y;
 }Str;
void main()
{
	//��̬�ڴ濪��
	//malloc  calloc
	//free
	//realloc

	//malloc��������Ϊ��ָ��-����ռ��ַ-����ʧ�ܷ��ؿ�ָ��
	Str* p = (Str*)malloc(sizeof(Str));
	p->x = 0;
	//���տռ�
	//���Ὣp��ַ��Ϊ��ָ��
	free(p);
	//��ֹ-�ֶ���ָ��
	p = NULL;

	//calloc-���ø���-ÿ���ֽڴ�С-�������Զ���ʼ��Ϊ0
	p = (Str*)calloc(10,4);
	free(p);
	//��ֹ-�ֶ���ָ��
	p = NULL;

	//realloc-�����ռ�-���ؿ�ָ����ߵ������µ�ַ/������ַ-������С
	p = (Str*)malloc(sizeof(Str));
	Str* p1 = (Str*)realloc(p,sizeof(Str));
	if (p1 == NULL)
		printf("����ʧ��");
	else
		p = p1;
	free(p);
	free(p1);
	p = NULL;
	p1 = NULL;
} 