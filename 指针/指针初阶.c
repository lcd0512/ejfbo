//1.指针是什么
//2.指针和指针类型是什么
//3.野指针
//4.指针运算
//5.指针数组
//6.二级指针
//7.指针数组
#include <stdio.h>
 void main()
 {
	 int a = 4;//a占4个字节
	 //存放地址的变量就是指针变量
	 int *pa =&a;//此时拿到的是啊的四个字节中第一个字节的地址
	 *pa = 20;
	 int* pb;
	 char* pc;
	 float* pd;
	 printf("%d\n", sizeof(pb));
	 printf("%d\n", sizeof(pc));
	 printf("%d\n", sizeof(pd));
	 //指针变量大小不管指针类型是什么类型在32平台4字节64平台八字节
 }