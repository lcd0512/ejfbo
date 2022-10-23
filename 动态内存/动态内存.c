#include <stdio.h>
#include <stdlib.h>
//动态内存
typedef struct Str
{
	int arr[1000];
	int x;
	int y;
 }Str;
void main()
{
	//动态内存开辟
	//malloc  calloc
	//free
	//realloc

	//malloc返回类型为空指针-申请空间地址-开辟失败返回空指针
	Str* p = (Str*)malloc(sizeof(Str));
	p->x = 0;
	//回收空间
	//不会将p地址变为空指针
	free(p);
	//防止-手动空指针
	p = NULL;

	//calloc-设置个数-每个字节大小-设置完自动初始化为0
	p = (Str*)calloc(10,4);
	free(p);
	//防止-手动空指针
	p = NULL;

	//realloc-调整空间-返回空指针或者调整后新地址/调整地址-调整大小
	p = (Str*)malloc(sizeof(Str));
	Str* p1 = (Str*)realloc(p,sizeof(Str));
	if (p1 == NULL)
		printf("开辟失败");
	else
		p = p1;
	free(p);
	free(p1);
	p = NULL;
	p1 = NULL;
} 