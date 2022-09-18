//结构体
//可以让c语言创建新类型
//创建一个类型
struct zdylx
{
	char name[5];
	int nl;
	float sg;
};
#include <stdio.h>
int main()
{
	struct zdylx s = { "张三",17,1.75 };//结构体的创建和初始化
	printf("%s %d %f\n", s.name, s.nl, s.sg);
	//指针打印
	struct zdylx* ps = &s;
	printf("%s %d %f\n", (*ps).name, (*ps).nl, (*ps).sg);
	printf("%s %d %f\n", ps->name,ps->nl,ps->sg );
	return 0;
}
