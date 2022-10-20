#include <stdio.h>
#include <stdlib.h>
void test_qsort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int x = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = x;
			}
		}
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int eee(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	test_qsort(arr,sz);
	//1。比较数组2-数组长度。3-元素字节大小4-比较函数
	qsort(arr, 10,4,eee);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}