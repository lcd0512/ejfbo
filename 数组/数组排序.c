#include <stdio.h>
void Sort(int* x,int y)
{
	//相邻两个进行比较
	for (int i = 0; i < y; i++)
	{
		//设置一个变量代表是否发生排序
		int k = 1;
		for (int j = 0; j < 9-i; j++)
		{
			if (*(x + j) > *(x + j +1))
			{
				int y = *(x + j);
				*(x + j) = *(x + j + 1);
				*(x + j + 1) = y;
				//发生排序改变变量
				k = 0;
			}
		}
		//当来到这里变量仍没有改变说明没有发生排序说明数组有序
		//减少了无效循环
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