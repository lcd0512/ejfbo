//�ַ�������һ���ַ�-��˫������������һ���ַ�
#include <stdio.h>
#include <string.h>
int main()

{
	"hello";
	//�ַ����ڽ�β������һ��\0���ַ�-���ַ��ܽ����ı�־
	"windows\0";
	//֤��
	//�ַ�����-������һ����ͬ���͵�Ԫ��
	//��[]�в���д��Сʱ�����ݺ��ַ���С����
	char arr[] = "family";
	//F10-����-����-����
	char arr1[] = "family";
	char arr2[] = {'a', 'b ','c' };
	char arr3[] = { 'a','b','c','\0' };
	//��ӡ�ַ���
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%s\n", arr);
	//��һ���ַ����ĳ���
	//strlen-��Ϊstring length
	strlen("family");
	int len = strlen("family");
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	return 0;
}