#include <stdio.h>
void Sort(int* x,int y)
{
	//�����������бȽ�
	for (int i = 0; i < y; i++)
	{
		//����һ�����������Ƿ�������
		int k = 1;
		for (int j = 0; j < 9-i; j++)
		{
			if (*(x + j) > *(x + j +1))
			{
				int y = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = y;
				//��������ı����
				k = 0;
			}
		}
		//���������������û�иı�˵��û�з�������˵����������
		//��������Чѭ��
		if (k == 1)
		{
			break;
		}
	}                                         

}
void main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	} 
	int sz = (sizeof(arr) / sizeof(arr[0])) - 1;
	Sort(arr,sz);
	printf("\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}