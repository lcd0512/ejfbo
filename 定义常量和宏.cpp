//define定义常量和宏
//1.定义常量
#define AAD 100
//定义宏
#define ADD(x,y) x+y
#define ADD1(x1,y1) ((x1)+(y1))
#include <stdio.h>
int main()
{
	printf("%d\n", AAD);
	printf("%d\n",ADD(2,2));

	printf("%d\n",4*ADD(2,2));
	//ADD =2+2 原式子替换为4*2+2=10
//所以打印结果为10
	printf("%d\n",4*ADD1(2,2));
	//替换后4*((2)+(2))=16
	return 0;
}