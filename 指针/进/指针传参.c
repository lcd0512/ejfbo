#include <stdio.h>
void test(int* x)
{
}
void test2(int** x)
{
	**x = 20;
}
void main()
{
	//一级指针传参
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int a = 1;
	int* p1 = &a;
	test(&a);
	test(p1);
	//二级指针
	int** p2 = &p1;
	test2(p2);
	printf("%d\n", a);
	int* brr[5] = {0};
	test2(brr);
}