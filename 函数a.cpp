#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//1函数-分类-库函数-自定义函数
//2库函数
//3自定义函数
//4函数参数
//5函数调用
//6函数的嵌套调用和链式访问-不可以嵌套定义-可以嵌套调用
//7函数声明和定义
//8函数递归
//创建一个函数可以比较两个数的最大值
//一个函数不写返回类型默认int类型
int DX(int x, int y)
{
	//intx ,int y -形式参数
	return x > y ? x: y;
}
//交换两个整形的值
//void时表示这个函数不反回任何值也不需要
void JH(int x, int y)//传值调用
{
	//设置过度变量
	int z = x;
	//xy交换-此时只有在该函数内值发生交换，其他函数不变
	x = y;
	y = z;
}
void JH1(int* x, int* y)//传址调用
{
	//int* x，y设置两个指针，获得地址录入
	//设置过度变量
	int z = *x;
	//交换通过指针远程修改ab值
	*x = *y, * y = z;
}
int main()
{
	//输入
	int a, b;
	scanf("%d %d", &a, &b);
	printf("输入值%d %d\n", a, b);
	//比较大小
	printf("最大值为%d\n", DX(a, b));
	//交换-1-此时无法修改此函数ab值
	JH(a, b);//调用函数-a b-实际参数：可以是常量，变量，表达式，函数等
	printf("%d %d\n", a, b);
	//通过指针修改
	//&a,&b获取ab地址传给JH1函数
	JH1(&a,&b);
	printf("%d %d\n",a, b);
	return 0;
}