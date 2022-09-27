#include<stdio.h>
//创建函数文件1.c
//头文件 1.h
//项目名字-属性-常规-生成exe改成lib静态库-运行获得lib文件
//使用静态库
#pragma comment (lib,"lib调用.lib")
//引用头文件
#include "1.h"
void main()
{
	printf("%d\n", A(66, 77));
}