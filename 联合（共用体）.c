#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//创建联合体/共用体
typedef union Aa
{
	int x;
	char y;
}Aa;

typedef union Bb
{
	char z[5];
	int x;
};
void main()
{
	Aa a;
	printf("%d\n", sizeof(a));//4
	printf("%p\n", &a);
	printf("%p\n", &(a.x));
	printf("%p\n", &(a.y));
	//三个地址一摸一样
	//共用同一块空间-最小大小是最大类型字节大小

//用来判段大端小端
	a.x= 1;
	if (a.y == 1)
		printf("小端\n");
	else
		printf("大端\n");

	//联合体计算
	//Bb-char[5]占5个字节-int为4字节非4倍数扩到8
}