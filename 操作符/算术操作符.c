#include <stdio.h>
void main()
{
	//左右都是整数执行为整数除法商0余3，故结果为0
	int a = 3 / 5;
	printf("%d\n", a);
	//商1余2故结果为1
	int b = 7 / 5;
	printf("%d\n", b);
	//结果仍为1只是类型改变
	float c = 7 / 5;
	printf("%d\n", c);
	//当左右存在浮点数时才会执行浮点数除法
	//此时默认小数为double类型
	//故结果为double类型当结果放在float里时可能丢失精度
	//将数字写成6.0f改变类型或者以double类型打印
	float d = 6.0 / 5;
	printf("%lf\n", d);
	//取模两端必须为整数返回结果为整数
	//当左无法取余时返回本值
	int e  = 3 % 8;
	printf("%d\n", e);
}