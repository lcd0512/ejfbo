#include <stdio.h>
void main()
{
	//数组名是首元素地址
	int arr[10] = { 0 };
	printf("%p\n", &arr[0]);
	printf("%p\n", arr);
	//
	//有两个意外
	//1.sizeof(数组名)-数组表示整个数组-计算的是整个数组的大小单位是字节
	//2.&数组名-数组名表示整个数组-取出来的是整个数组的地址
	printf("%d\n", sizeof(arr));
	//
	printf("%p\n", &arr);//--取出数组地址
	printf("%p\n", &arr[0]);//--取出首元素地址
	//数组在传参的时候，传递的是首元素地址，形参部分数组无法计算个数
}