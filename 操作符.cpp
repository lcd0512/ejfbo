//操作符
//算术操作符：+ - *  / %-取余
//移位操作符：>>-右移   <<-左移
//位操作符： &-按位与   |-按位或   ^--按位异或
//赋值操作符： = += -= /= ^= |= >>= <<=
//单目操作符：!逻辑反操作 -负值 +正值 &取地址 
//sizeof操作数的类型长度（以字节为单位）
// ~对一个数二进制按位取反   -- ++前置后置  
///*间接访问操作符 (解引用操作符)
//(类型)强制类型转换
//关系操作符
//>大于  <小于  <=小于等于  >=大于等于  ==等于 !=不等于
//逻辑操作符
//&&逻辑与    有假必假 
//||逻辑或    有真为真 
//条件操作符（三目操作符）
// ？：
// exp1?  exp2:  exp3
//exp1成立  exd2计算 整个表达式的结构是：exp2的结构
//exp1不成立 exp3计算，整个表达式结果是：exp3的结果
//逗号表达式--逗号隔开的一串表达式
//下标引用操作符[]  
//函数调用 ()   调用函数时，函数名后边的括号就是函数操作符
//结构成员
//. ->
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 9 / 2;
	float b = 9 / 2;
	float c = 9.0 / 2;
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	//两端有一个小数按小数来除其余求整
	//取余
	int d = 9 % 2;
	printf("%d\n", d);
	//九除以二等于四余一
	//左移操作符-移动的是二进制位
	int e = 2;
	int f = e << 1;
	printf("%d\n", f);
	//int为整形占4字节=32比特位
	//2的二进制为10
	//所以表达为00000000000000000000000000000010
	//左移后；  00000000000000000000000000000100
	//100二进制位对于十进制位4
	//所以打印结果为4
	//赋值操作符
	// a=a+1与a+=1功能相同其他以此类推
	int a1 = 0;
	a1 = a1 + 5;
		printf("%d\n", a1);
		int a2 = 5;
		a2 *= 3;
		printf("%d\n", a2);
	//单目操作符-只有一个操作数
	//a+b中有两个操作数，所以+为双目操作符
	//0表示假 非0表示真
		int b1 = 0;
		printf("%d\n", !b1);
		if (b1)
		{
			//如果b1为真
		}
		if (!b1)
		{
			//如果b1为假
		}
		//saizeof 是操作符，求变量后面括号可以省略，类型不行
		//获取a的类型，a的类型为int整形故结果与int相同为4字节
		int c1 = 10;
		printf("%d\n", sizeof(int));
		printf("%d\n", sizeof(a));
		printf("%d\n", sizeof a);
		//计算数组大小
		int arr[10] = { 0 };
		printf("%d\n", sizeof(arr));
		//结果为40
		//arr类型为int，一个int为4个字节，arr有10个数，故4*10=40
		printf("%d\n", sizeof(arr[0]));
		//打印数组第一个数，类型依旧为int，故为4字节
		//求元素个数
		int sz = sizeof(arr) / sizeof(arr[0]);
		printf("%d\n", sz);
		//按位取反-二进制位
		int ab = 0;
		printf("取反：%d\n", ~ab);
		//把所有二进制位中数字1变0，0变1
		//0的二进制:00000000000000000000000000000000
		//变成了	11111111111111111111111111111111
		//数据在内存中存储的是补码
		//一个整数的二进制表达有三种-原码-反码-补码
		//对于负数例如-1
		//原码10000000000000000000000000000001，  第一位为符号位
		//反码11111111111111111111111111111110，  符号位不变，其他取反
		//补码11111111111111111111111111111111，  反码加1等于补码
		//对于正整数全相同
		//所以0二进制反码后变成了11111111111111111111111111111111
		//补码转换反码变成11111111111111111111111111111110
		//在进行原码转换变成-1
		//==,--
		int aa = 10;
		//前置++
		int bb = ++aa;
		printf("%d\n", bb);
		printf("%d\n", aa);
		//先++后使用
		// ++a:aj加1此时a值为11
		// 后b使用所以均为11
		//后置++
		int cc = 10;
		int dd = cc++;
		printf("%d\n", cc);
		printf("%d\n", dd);
		//先使用后++
		//*操作符
		//强制类型转换
		int h = (int)3.14;
		printf("%d\n", h);
		//逻辑操作符
		int aa1 = 2;//不为零为真
		int aa2 = 3;
		int aa3 = aa1 && aa2;
		int aa4 = 0;
		printf("%d\n", aa3);
		if (aa1 && aa2)
		{
			printf("真\n");

		}
		if (aa1 || aa4)
		{
			printf("真\n");
		}
		//条件操作符
		int j1 = 0;
		int j2 = 3;
		int j3 = 0;
		if (j1 > j2)
		{
			j3 = j1;
		}
		else {
			j3 = j2;
		}
		printf("%d\n", j3);
		//
		j3 =j1 > j2 ? j1 : j2;
		printf("%d\n", j3);
		//逗号表达式nn
		//从左向右依次计算的
		//整个表达式的结果是最后一个表达式的结果
		(2, 3 + 4, 5);
		int jj1 = 0;
		int jj2 = 3;
		int jj3 = 5;
		int jj4 = (jj1 = jj2 + 2, jj3 = jj1 - 4, jj2 = jj3 * 4);
		printf("%d\n", jj4);
		//下标引用操作符
		int jjr[3] = { 1,2,3 };
		printf("%d\n", jjr[2]);//[]为下标引用操作符 （）为函数调用操作符
	return 0;
}