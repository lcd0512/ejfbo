#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//分支语句
//if
//switch-也是一种分支语句常常用于多分支的情况
//循环语句
//while
// for
// do while
//goto语句
// 
//break可以跳出循环-跳出switch
//default在switch中统一处理其他输入
//continue在while循环中可以返回循环跳到判断
// strcmp(a,b)==0 对比两个字符串-引用string.h-等于返回0，小于返回小于0大于返回大于0
//语句-从语言中由；隔开的就是一条语句
//;-空语句
// 
//if语句
//语法结构
// if (表达式)
//{
//	语句;
//}
//if(表达式）
// {语句1；
// else
// 语句2；
// }
//  多分支
// if(表达式1)
// 语句1；
// else if(表达式2)
// 语句2；
// else
// 语句3；
//switch(整形表达式）
//{语句项}
//语句项-一些case语句
//case 整形常量表达式
//语句；
//
//while语法结构
//while (表达式)-表达式为真非零开始循环
//循环语句；
//
//for结构
//for(表达式1，表达式2，表达式3）-1：初始化，2-判断，调整部分
//循环语句；
//
// //do....while  循环结构
// do
// 循环语句（先执行后判断）
// while（表达式）
// 
//getchar()获取数据(字符）gets（字符串）
// //CTRL+z读取结束
// putcher()输出字符
//EOF-end of file 文件的结束标记-本质是-1
//getchar-scanf-都从缓存区获取数据
//回车（\n）会触发scanf获取数据-有空格会获取到空格前文件
//getchar识别缓存区数据空则会等待
//清理缓存区可用getcahr读取清空
//清理多个
//while((变量=getchar())!='\n'){;}
//当字符不等于回车时不断循环读取直到回车
void ifyjv()
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 18&&a<=30)
	{
		printf("成年\n");
	}
	//
	//else if(30<a<60)这种写法是错误的a会首先和30比较为真既为1，1小于60
	else if (30 < a && a < 60)
	{
		printf("中年\n");
	}
	else if (a < 100 && a >= 60)
	{
		printf("老年\n");
	}
	else
	{
		printf("??????\n");
	}
	//浮空else问题
	int c = 0;
	int d = 2;
	if (c == 1)
		if (d == 2)
			printf("1");
		else
			printf("2");
	//结果什么都不打印
	//else与最近的if匹配
}
void lx1()
{
	//判断一个数是否为奇数
	int a = 0;
	scanf("%d", &a);
	if (a % 2)
	{
		printf("是奇数\n");
	}
	else
	{
		printf("不是奇数\n");
	}
}
void lx2()
{
	//输入100个数输出1到100的奇数
	int i = 1;
	while (i <= 100)
	{
		if (i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
}
void lx3()
{//同二
	int i = 0, n = 0, f = 0, arr[100], arr2[100];
	//输入
	while (i < 100)
	{
		arr[n] = n + 1;
		printf("%d\n", arr[n]);
		if (arr[n] % 2)
		{
			arr2[f] = arr[n];
			f++;
		}
		i++, n++;
	}
	i = 0;
	while (i < f)
	{
		printf("%d\n", arr2[i]);
		i++;
	 }
}
void Switch()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)//a为整形，常量值
	{
		//a值决定入口
		//break为出口
	case 1:
	{
		printf("星期一\n");
		//当没有语句阻止时将会往下继续执行
		break;
		//break跳出
	}
	case 2:
	{
		printf("星期二\n");
		break;
	}
	case 3:
	{
		printf("星期三\n");
		break;
	}
	}
	//输入1-5输出工作日67休息日-其他值返回
	int b = 0;
	scanf("%d", &b);
	switch (b)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default://其他输入执行
		printf("输入错误\n");
			break;
	}
}
void xh()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
		case 1: {
			int i = 0;
			while (i < 10)
			{
				printf("%d\n", i);
				i++;
			}
			i = 0;
			while (i < 5)
			{
				if (i == 3)
					break;
				printf("%d\n", i);
				i++;
			}
			i = 0;
			while (i < 5)
			{
				i++;
				if (i == 3)
				{
					continue;
				}
				printf("%d\n", i);
			}
			break;
		}
		case 2: {
			int  i = 0;
			for (i = 1; i < 10; i++)
			{
				printf("%d\n", i);
			}
			break;
		}
		case 3: {
			int a = 0;
			do
			{
				printf("%d\n", a);
				a++;
			} while (a<5);
			break;
		}
	}
}
void huoqv()
{
	int a = 0;
	while ((a = getchar()) != EOF) 
	{
		putchar(a);
		//ctrl +z退出循环
		if (a == 'TZ')
		{
			break;
		}
	}

}
void mima()
{
	int a = 0;
	char arr[10]={0};
	printf("请输入密码：");
	scanf("%s", arr);
	//此时清除缓存区
	while ((a = getchar()) != '\n'); {; }
	printf("请确认密码（Y/N）：");
	int b = getchar();
	if (b == 'Y') { printf("成功：%s", arr); }
	if (b == 'N') { printf("失败"); }
}
void eff(){
	int arr[100]={0};
	for (int i =0;i<100;i++)
	{
		arr[i] = i + 1;
	}
	int a, pjz, left, right;
	int cd = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &a);
	for (left = 0,right = cd-1;0<a<=100;)
	{
		pjz = (left + right) / 2;
		if (a<pjz)
		{
			right = pjz;
		}
		else if (a > pjz)
		{
			left = pjz;
		}
		else if (a == pjz)
		{
			printf("下标为：%d\n值为：%d\n",a-1 ,arr[a-1]);
			break;
		}
	}
}
void DY() {
	 char arr[] = ">>>>>>>>>>-<<<<<<<<<<";
	char arr1[] = "#####################";
	int left = 0;
	int right = strlen(arr)-1;
	printf("%s\n", arr1);
	system("cls");
	while(left<=right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		printf("%s\n", arr1);
		//Sleep-休眠-引用include <Windows.h>
		Sleep(250);
		//system("cls")-清空屏幕
		system("cls");
		left++;
		right--;
	}

}
void csz() {
	printf("1.开始游戏\n2.退出游戏\n");
	printf("请选择:");
	int xz1=0;
	scanf("%d", &xz1);
	switch (xz1)
	{
	case 1: {
		//1.生成随机数-rand-需要引用stdlib.h
		//2.srand-设置随机起点
		//强制类型转换成srand类型
		//3.time()获取时间-整形-引用-time.h
		srand((unsigned int)time(NULL));
		int a = rand() % 100+1;
		//rand返回了0-32767整形,需要0到100，将随机数%100，余数为0到99，加1便是0到100
		//printf("%d\n", a);
		//猜数字
		for (int b;;) {
			b;
			scanf("%d", &b);
			if (a == b) {
				printf("猜对了\n");
				Sleep(500);
				system("cls");
				break;
			}
			else if (a < b) {
				printf("猜大了\n");
			}
			else if (a > b) {
				printf("猜小了\n");
			}
		}
		csz();
		break;
	}
	case 2: {
		break;
	}
	default:{
		system("cls");
		printf("请输入1/2");
		Sleep(500);
		system("cls");
		csz();
		  }
	}
}
int main()
{
	int xz = -1;
	scanf("%d", &xz);
	//if语句-1
	//switch-5
	//循环语句-6
	switch (xz)
	{
	case 0:return 0;
	case 1:ifyjv();break;
	case 2:lx1();break;
	case 3:lx2();break;
	case 4:lx3();break;
	case 5:Switch();break;
	case 6:xh(); break;
	case 7:huoqv(); break;
	case 8:mima(); break;
	case 9:eff(); break;
	case 10:DY(); break;
	case 11:csz(); break;
	default:{
		printf("请重新输入\n");
		main();

	}
	}
}
