//转义字符-转变了他原来的意思
//	\o空字符
//	\n换行
// \r回车
//	\t水平制表符
//	\v垂直制表符
//	\a响铃
//	\b退格符
//	\f换页符
//	\'单引号
// \"双引号
//	\\斜杠
//	\?问号
//	\ddd
//	\xdd
#include <stdio.h>
#include <string.h>
int main()
{
	printf("c:\test\test.c");
	printf("ab\ncd");
	printf("\a");
	//加入反斜杠正常打印
	printf("\\a\n");
	//\ddd
	//8进制的130为88
	//8^2*1+ 8^1*3+8^0*0=88
	//X的ASCII值是88
	printf("%c\n", '\130');
	//当将130为字符的时候
	//将八进制130转换成十进制所代表88作为的ASCII值代表字符
	printf("%c\n", '\101');
	//每一个字符都有一个ASCII值
	//\xdd
	//x后为16进制对应字符0
	printf("%c\n", '\x30');
	printf("%d\n", strlen("c:\test\328\test.c"));
	//8超出了八进制所以\328在8时截至
	//故打印字符串长度为14
	return 0;
}