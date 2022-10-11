#include <stdio.h>
//指针数组-存放指针的数组
void main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3]={&a,&b,&c};
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	int a1[5] = { 1,2,3,4,5 };
	int a2[5] = { 2,3,4,5,6 };
	int a3[5] = { 3,4,5,6,7 };
	int* arr1[3] = { a1,a2,a3};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//printf("%d ", *(arr1[i] + j));
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}