#include <stdio.h>

//Ԥ�������

// _FILE_���б����Դ�ļ�
// _LINE_�ļ���ǰ�к�
// _DATE_�ļ�����������
// _TIME_�ļ�������ʱ��
// _STDC_����ļ���ѭANSI��ֵΪ1
//
void main()
{

	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
}