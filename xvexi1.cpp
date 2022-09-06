#include <stdio.h>
#define MAMA 1000
//作用域和生命周期（函数范围内）
//局部变量作用域为变量所在局部范围
//全局变量同一项目工程有效但需声明变量-extern 
extern int csbl;
//枚举性别
enum Sex {
	//枚举类型的变量未来取值
	NAN,
	//NAN = 5，
	//若如此为给予NAN赋予初值-往下随着初值递增
	NV,
	BM
};
int main()
{
	printf("可恶\n");
	{
		//变量范围
		int a = 100;
		printf("a = %d\n", a);
		//
		printf("csbl = %d\n", csbl);
	}
	//常量
//字面常量
	{
		1;
	2;
	'a';
	"djhdhdwhd9";
	}
	//const修饰的常变量
	const int xscl = 520;
	//此时xscl为常变量-不可修改-具有常属性-本质为变量
	//xscl = 20；
	//define定义的标识符常量
	int dybf = MAMA;
	printf("dypf = %d\n", dybf);
	//枚举常量
	//可以一一列举的常量
	//下s取值只能为其中列举量
	enum Sex s = NAN;
	//枚举常量是常量，值从零开始递增
	printf("%d\n", NAN);
	printf("%d\n", NV);
	printf("%d\n", BM);
	return 0;
}