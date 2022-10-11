//1.字符指针
//2.数组指针
//3.指针数组
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数 

#include <stdio.h>
void main()
{
	char ch = 'a';
	char* p = &ch;
	char* p1 = "hello";//将首字符地址传给p1
	char arr[] = "hello";
	char* p2 = arr;
	printf("%s\n", p1);
	printf("%s\n", p2);

	char arr1[] = "hello";
	if (arr == arr1)//不同数组地址不一样
		printf("Y\n");
	else
		printf("N\n");
	char* a1 = "hello";//都是常量-都是其首地址
	char* a2 = "hello";
	if (a1 == a2)
		printf("Y\n");
	else
		printf("N\n");
	//*a1=hhhu;无法修改因为其为字符常量； 
}