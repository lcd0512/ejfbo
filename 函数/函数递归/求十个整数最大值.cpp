#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void main()
{
	int arr[10];
	int max = 0;
	for (int i =0;i < 10;i++)
	{
		printf("%d:",i+1);
		scanf("%d", &arr[i]);
	}
	int i = 0;
	for (max = arr[0]; i<10; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);
}