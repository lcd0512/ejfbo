//�����ؼ���
//�ؼ��ֲ�����Ϊ������-
//�����Լ�����
// 
// auto,brek,case,char,const,continue,default,do,double,else,enum
// extern,float,for,goto,if,int,long,register,return,short,signed
// sizeof,static ,sturuct,switch,typedef,unon,unsigned,void,volatile
// whilt
//auto ���Զ��� ÿ���ֲ���������auto���ε�
//break ����ѭ��
//extern�����������ⲿ���ŵ�
//register �Ĵ����ؼ���
		//����������ݿ��Դ���� �ڴ��� Ӳ�� ���� ���ٻ��� �Ĵ���
//return ��������
//signed �з��ŵ� +10 -20
//unsigned�޷��ŵ�
//static ��̬��-1.���ξֲ�����2.ȫ�ֱ�����3.���κ���
//1�ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢���ͣ�
//�������������ջ������������̬��
// ջ�����ֲ�����-�����Ĳ���
// ��������̬�ڴ����
// ��̬����ȫ�ֱ�����static���εľ�̬����
//2.����ȫ�ֱ���ʹȫ�ֱ���ֻ���ڱ��ļ�ʹ�ò��ɱ������ļ�����
//3.���κ���ʱ�����޷��������ļ�����
// �����ϸı亯�����ⲿ�������Ա�����ڲ���������
//union  ������ ������
//void �� ��
// typedef-�����ض���-������

//define include ΪԤ����ָ��ǹؼ���


//ʹ��typedef��unsigned int���������wfhcdy����������ͬ

#include <stdio.h>
//extern�����ⲿ
//#define h 2022
extern int h22;
extern int add(int x, int y);

typedef unsigned int wfhcdy;
//�����ļ���ʹ�ô˺�����Ҫ�ڶ����ļ�����

void test()
{
	//���뺯�������ֲ�������= 1
	int f = 1;
	f++;
	//+1
	printf("%d\n", f);
	//��ȥ�ֲ���������
	//��ÿ��ִ�д�ӡ2
	//static
	//�����ε���̬��Լ����ȫ�ֱ���
	static int g = 1;
	g++;
	printf("%d\n", g);

}



int main()
{
	int a = 0;//�Զ������Զ����� -�Զ�����
	//auto int a = 0;
	//auto  ʡ�Ե���
	//auto �µĴ�����Ҳ�������÷�
	register int b = 100;
	//����b��ֵ����ڼĴ�����
	//����Ƶ����ʹ�õ����ݣ�����ڼĴ���������Ч��

	unsigned int c = 100;
	wfhcdy d = 200;

	//ѭ��ִ���Զ���test()
	while (a < 2)
	{
		test();
		a++;
	}
	printf("%d\n", h22);
	int add1 = 1;
	int add2 = 1;
	int add3 = add(add1, add2);
	printf("%d\n", add3);
	return 0;
}