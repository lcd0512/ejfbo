#include <stdio.h>
#include <stdlib.h>
typedef struct Arr
{
	//��������ǰ�����������һ����Ա
	//sizof�������������С
	//��malloc�����ڴ�-�����ڴ��С������ڽṹ���С
	int x;
	int arr[];//��Сδ֪-arr[0]
}Arr;
void main()
{
	//ϣ��arr��С��10������
	Arr* p= (Arr*)malloc(sizeof(Arr)+10*sizeof(int));
	p = (Arr*)realloc(p,sizeof(Arr)+40);
	free(p);
}