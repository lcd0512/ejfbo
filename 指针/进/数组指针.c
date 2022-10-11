#include <stdio.h>
void print(int arr[3][5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print1(int (*arr)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

void main()
{
	//数组指针
	//是一种指针-指向数组的指针
	int a = 10;
	int* p = &a;
	char ch = 'w';
	char* pc = &ch;
	int arr[10] = { 1,2,3,4,5 };
	//arr-是arr[0]的地址
	int(*parr)[10] = &arr; 
	//parr数组指针

	double* d[5]={1,2,3,4,5};
	double* (*pd)[5] = &d;

	//数组名是数组首元素的地址
	//有两个例外
	//1.sizeof(数组名)数组名表示整个数组，计算的是整个数组大小，单位是字节
	//2.&数组名-数组名表示整个数组，取出的是整个数组的地址

	int brr[5] = { 1,2,3,4,5 };
	int(*br)[5] = &brr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *((*br)+i));
	}
	int crr[3][5] = { {1,2,3,4,5,},{2,3,4,5,6},{3,4,5,6,7} };
	//一维数组数组名表示首元素地址
	//二维数组数组名表示第一行地址
	print(crr, 3, 5);
	print1(crr, 3, 5);

	// int(*arr)[10];//数组指针，能够指向一个数组，数组有10个元素，类型为int
	//int (*arr[10])[5];arr[10]为存放数组指针的数组能存放10个数组指针，每个数组指针能指向一个数组数组5个元素类型为int
}