//�ṹ��
//������c���Դ���������
//����һ������
struct zdylx
{
	char name[5];
	int nl;
	float sg;
};
#include <stdio.h>
int main()
{
	struct zdylx s = { "����",17,1.75 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %f\n", s.name, s.nl, s.sg);
	//ָ���ӡ
	struct zdylx* ps = &s;
	printf("%s %d %f\n", (*ps).name, (*ps).nl, (*ps).sg);
	printf("%s %d %f\n", ps->name,ps->nl,ps->sg );
	return 0;
}
