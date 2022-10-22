#include <stdio.h>
//匿名类型
struct
{
	int x;
	int y;
};
struct A
{
	int x;
	int y;
};
struct S
{
	int x;
	char y;
	struct A a;
	//结构体自引用
	struct S* s;
}s;
typedef struct C
{
	char z;
	int x;
	char y;
}C;
//位段-与结构体类似后面有：和数字
struct AA
{
	//类型只能是int -unsigned int  -signed int--可以char类型
	//后面数字决定类型占几个比特位
	//最大值为类型比特位最大值
	//内存从低到高使用（左到右）
	int x:2;
	int y:5;
	int z:8;
	int j:30;
};
void main()
{
	struct S *p= &s;
	p->x = 20;
	p->y = 'z';
	p->a.x = 2;
	//结构体内存对齐-对应字节倍数-嵌套结构体对其最大对其数倍数-默认最大对齐数是八
	//#pragam pack(2)--改变默认对齐数
	//#pragam pack（）--恢复默认
	C c = { 0 };
	printf("%d\n", sizeof(c));
	//offsetof计算结构体相对首地址偏移

	//位段
	printf("%d\n",sizeof(struct AA));
}