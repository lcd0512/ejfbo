#include <stdio.h>

//memcpy
// memmove
// memmcmp
//memset
void main()
{
	//memcpy-内存拷贝-被输入-被复制-拷贝字节大小
	int arr[5] = { 1,2,3,4,5 };
	int arr1[5] = { 6,7};
	memcpy(arr, arr1,8);
	for(int i =0;i<5;i++)
	{
		printf("%d ", arr[i]);
	}
	// memmove可以处理内存重叠问题
	memmove(arr+2,arr,8);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	//memcmp内存比较-数组-数组-比较字节数
	float brr[] = { 1.0,2.0,3.0,4.0,5.0 };
	float brr1[] = { 1.0,2.5,3.0,4.0,5.0 };
	printf("%d\n", memcmp(brr, brr1, 8));

	//memset-内存设置-以字节为单位设置内存
	int arr[] = { 1,2,3,4,5 };
	//数组-改变值-改变字节数
	memset(brr,1,10);

}