#include <stdio.h>
void main()
{
	//a的二进制位00000000000000000000000000000010
	int a = 2;
	//左移移位操作符将a二进制向左移动-空位补零
	//此时向左移动1位故此时二进制为00000000000000000000000000000100
	//对应值为4
	int b = a << 1;
	printf("%d\n", b);

	//c的二进制位00000000000000000000000000001010
	int c = 10;
	//右移移位操作符将a二进制向右移动
	//1.算术位移-右边丢弃左边补原符号位
	//2.逻辑位移-右边丢弃左边补零
	//此时向右移动1位故此时二进制
	//对应值为4
	int d = c >> 1;
	printf("%d\n", d);
}