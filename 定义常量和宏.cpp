//define���峣���ͺ�
//1.���峣��
#define AAD 100
//�����
#define ADD(x,y) x+y
#define ADD1(x1,y1) ((x1)+(y1))
#include <stdio.h>
int main()
{
	printf("%d\n", AAD);
	printf("%d\n",ADD(2,2));

	printf("%d\n",4*ADD(2,2));
	//ADD =2+2 ԭʽ���滻Ϊ4*2+2=10
//���Դ�ӡ���Ϊ10
	printf("%d\n",4*ADD1(2,2));
	//�滻��4*((2)+(2))=16
	return 0;
}