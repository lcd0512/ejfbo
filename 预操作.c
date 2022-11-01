#include <stdio.h>

//预定义符号

// _FILE_进行编译的源文件
// _LINE_文件当前行号
// _DATE_文件被编译日期
// _TIME_文件被编译时间
// _STDC_如果文件遵循ANSI其值为1
//
void main()
{

	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
}