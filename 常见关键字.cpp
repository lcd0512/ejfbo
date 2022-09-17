//常见关键字
//关键字不能作为变量名-
//不能自己创建
// 
// auto,brek,case,char,const,continue,default,do,double,else,enum
// extern,float,for,goto,if,int,long,register,return,short,signed
// sizeof,static ,sturuct,switch,typedef,unon,unsigned,void,volatile
// whilt
//auto 是自动的 每个局部变量都是auto修饰的
//break 跳出循环
//extern是用来声明外部符号的
//register 寄存器关键字
		//计算机中数据可以存放在 内存中 硬盘 网盘 高速缓存 寄存器
//return 返回数据
//signed 有符号的 +10 -20
//unsigned无符号的
//static 静态的-1.修饰局部变量2.全局变量，3.修饰函数
//1改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//计算机储存区有栈区，堆区，静态区
// 栈区：局部变量-函数的参数
// 堆区：动态内存分配
// 静态区：全局变量，static修饰的静态变量
//2.修饰全局变量使全局变量只能在本文件使用不可被其他文件引用
//3.修饰函数时函数无法被其它文件调用
// 本质上改变函数的外部链接属性变成了内部链接属性
//union  联合体 共用体
//void 无 空
// typedef-类型重定义-重命名

//define include 为预处理指令不是关键字


//使用typedef将unsigned int函数定义成wfhcdy，两功能相同

#include <stdio.h>
//extern声明外部
//#define h 2022
extern int h22;
extern int add(int x, int y);

typedef unsigned int wfhcdy;
//其他文件想使用此函数需要在对于文件声明

void test()
{
	//进入函数创建局部变量发= 1
	int f = 1;
	f++;
	//+1
	printf("%d\n", f);
	//出去局部变量销毁
	//故每次执行打印2
	//static
	//被修饰到静态区约等于全局变量
	static int g = 1;
	g++;
	printf("%d\n", g);

}



int main()
{
	int a = 0;//自动创建自动销毁 -自动变量
	//auto int a = 0;
	//auto  省略掉了
	//auto 新的从语言也有其他用法
	register int b = 100;
	//建议b的值存放在寄存器中
	//大量频繁被使用的数据，想放在寄存器中提升效率

	unsigned int c = 100;
	wfhcdy d = 200;

	//循环执行自定义test()
	while (a < 2)
	{
		test();
		a++;
	}
	printf("%d\n", h22);
	int add1 = 1;
	int add2 = 1;
	int add3 = add(add1, add2);
	printf("%d\n", add3);
	return 0;
}