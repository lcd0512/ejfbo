//�ṹ��-һЩֵ�ļ���-ֵ�����Ϳ��Բ�ͬ
#include<stdio.h>
struct B
{
	int a;
	int b;
}b;
struct STU
{
	//��Ա����-������ָ������������������ṹ��
	//struct B b-������������
	struct B b;
	char name[10];
	int age;
	int id;
};//�˴���s,s1;��ȫ�ֱ���
void Print(struct STU x)
{
	printf("%d %d %s %d %d\n", x.b.a, x.b.b, x.name, x.age, x.id);
}
void Print1(struct STU* x)
{
	printf("%d %d %s %d %d\n", x->b.a, x->b.b, x->name, x->age, x->id);
}
void main()
{
	struct STU A = {{1,2}, "����",18,44088};
	//�ṹ�����   .    ->
	printf("%d %d %s %d %d\n",A.b.a,A.b.b, A.name, A.age, A.id);
	struct STU* p = &A;
	printf("%d %d %s %d %d\n", (*p).b.a, (*p).b.b, (*p).name, (*p).age, (*p).id);
	printf("%d %d %s %d %d\n", p->b.a, p->b.b, p->name, p->age, p->id);
	//�������ʽṹ��
	Print(A);//��ֵ����
	Print1(&A);//��ַ����-ռ���ڴ���-�Һ����ڿɸ���A
}
