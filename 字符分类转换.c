#include <stdio.h>
#include <ctype.h>
void main()
{
	char arr= "#";
	//判断是否是数字字符-不是返回0
	printf("%d\n",isdigit(arr));
	//判断小写字母-不是返回0
	printf("%d\n",islower(arr));
	//字符转换函数
	
	//tolower-转换成小写
	//toupper-转换成大写
}