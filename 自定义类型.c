#include <stdio.h>
//��������
struct
{
	int x;
	int y;
};
struct A
{
	int x;
	int y;
};
struct S
{
	int x;
	char y;
	struct A a;
	//�ṹ��������
	struct S* s;
}s;
typedef struct C
{
	char z;
	int x;
	char y;
}C;
//λ��-��ṹ�����ƺ����У�������
struct AA
{
	//����ֻ����int -unsigned int  -signed int--����char����
	//�������־�������ռ��������λ
	//���ֵΪ���ͱ���λ���ֵ
	//�ڴ�ӵ͵���ʹ�ã����ң�
	int x:2;
	int y:5;
	int z:8;
	int j:30;
};
void main()
{
	struct S *p= &s;
	p->x = 20;
	p->y = 'z';
	p->a.x = 2;
	//�ṹ���ڴ����-��Ӧ�ֽڱ���-Ƕ�׽ṹ�����������������-Ĭ�����������ǰ�
	//#pragam pack(2)--�ı�Ĭ�϶�����
	//#pragam pack����--�ָ�Ĭ��
	C c = { 0 };
	printf("%d\n", sizeof(c));
	//offsetof����ṹ������׵�ַƫ��

	//λ��
	printf("%d\n",sizeof(struct AA));
}