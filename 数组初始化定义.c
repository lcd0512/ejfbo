#include <stdio.h>
void init(int arr[], int x)
{
	for (int i = 0; i < x; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int x)
{
	for (int i = 0; i < x; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void reverse(int arr[],int x)
{
	int left = 0;
	int right = x-1;
	for (;right-left>1;)
	{
		int a = arr[left];
		arr[left] = arr[right];
		arr[right] = a;
		left++;
		right--;
	}
}
void cpy(int arr1[], int arr2[], int x)
{
	for (int i = 0; i < x; i++)
	{
		int a = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = a;
	}
}
void main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	Print(arr, sz);
	init(arr, sz);
	Print(arr, sz);
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	cpy(arr1, arr2,sz1);
	Print(arr1, sz1);
	Print(arr2, sz1);
}