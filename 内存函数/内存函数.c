#include <stdio.h>

//memcpy
// memmove
// memmcmp
//memset
void main()
{
	//memcpy-�ڴ濽��-������-������-�����ֽڴ�С
	int arr[5] = { 1,2,3,4,5 };
	int arr1[5] = { 6,7};
	memcpy(arr, arr1,8);
	for(int i =0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
	// memmove���Դ����ڴ��ص�����
	memmove(arr+2,arr,8);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	//memcmp�ڴ�Ƚ�-����-����-�Ƚ��ֽ���
	float brr[] = { 1.0,2.0,3.0,4.0,5.0 };
	float brr1[] = { 1.0,2.5,3.0,4.0,5.0 };
	printf("%d\n", memcmp(brr, brr1, 8));

	//memset-�ڴ�����-���ֽ�Ϊ��λ�����ڴ�
	int arr[] = { 1,2,3,4,5 };
	//����-�ı�ֵ-�ı��ֽ���
	memset(brr,1,10);

}