#include <stdio.h>

//1.一维数组的创建和初始化
//2.一维数组的使用
//3.一维数组在内存中的存储
//4.二维数组的创建和初始化
//5.二维数组的使用
//6.二维数组在内存中的存储
//7.数组作为函数参数

//数组-一组相同类型元素的集合
//数组创建-- 数组类型-数组名字-[]数组大小
//int arr[10] = {1,2,3,4,5,6,7,8,9,10}完全初始化
//int arr[10]  = {1,2,3,4,5} 不完全初始化
// 
//char arr[5] = {'w','d','w'}不完全初始化
//char arr[] = {'w','d','w'}
//char arr[5] = "abc"-数组内容abc\0-不完全初始化
//char arr[] = "abc"-数组内容abc\0
//char arr[] = "abc"-4个元素a,b,c,\0
//char arr[] = {‘a’，‘b’，‘c’}-3个元素a,b,c,无\0
//数组下标增长地址由低到高
//数组名是数组首元素地址
void main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", *p);
		p++;
	}
}