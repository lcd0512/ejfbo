#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("�ɶ�\n");
	printf("1");
	printf("2");
	printf("3\n4\n5\n");
	//�ַ�����
	//char �ַ���������
	// short ������
	//int ����
	// long ������
	// long long ����������
	// float�����ȸ���ֵ
	//double ˫���ȸ���ֵ
	//����cahr���Ϳռ����ch�����ַ�a����ch
	//�ֲ�������ȫ�ֱ�����ͻ���ֲ���������
	char ch = 'kewu';
	//��ӡ����-%d-%zd
	//double-%lf
	//float-%f
	printf("%d\n", 100);
	//sizeof-�ؼ���-������-�������ͻ��������ռ�ռ��С-��λ-�ֽ�byte
	//�������λ
	//bit����
	//byte�ֽ�=8bit
	//kb=1024byte
	//mb=1024kb
	//gb=1024mb
	//tb=1024gb
	//pb=1024tb
	//c���Ա�׼sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	int zs = 0;
	double sfdz = 0.00;
	printf("%d\n", zs);
	printf("%lf\n", sfdz);
	zs = zs + 1;
	sfdz = sfdz + 0.12;
	printf("%d\n", zs);
	printf("%lf\n", sfdz);
	//�����������ĺ�
	//scanf���������뺯��
	int a = 0;
	int b = 0;
	int sum = 0;
	//ʹ��scanf��Ҫdefine _CRT_SECURE_NO_WARNINGS 1
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	int c = 0;
	int sun = 0;
	scanf("%d", &c);
	sun = sum + c;
	printf("sun = %d\n", sun);
	return 0;
} 

