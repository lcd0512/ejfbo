#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void main()
{
	//文件指针-FILE-文件信息区
	FILE* p;//文件指针变量

	//打开关闭文件
	//打开-FILe*fopen返回类型为FILE/文件名-文件打开方式
	//关闭-int fclose返回类型为int
	//r——只读/打开读/不存在打开失败
	// w——只写/打开空文件写/如果文件有文件里面内容将被销毁/,没有文件会创建文件
	// a——追加/打开文件在文件尾添加数据/无文件会创建文件
	// rb——只读/打开一个二进制文件
	// wb——只写/打开二进制文件进行写/无文件会创建文件
	// ab——追加/打开二进制文件在文件尾进行追加 
	// r+ —读写/读和写
	// w+ —读写/读和写/建立一个新的文件/无文件创建文件
	//a+——读写/打开一个文件/在文件尾进行读写/无文件创建文件
	//rb+——读写/打开二进制文件读写
	//wb+——读写/创建二进制文件进行读写/无文件创建新文件
	//ab+——读写/打开二进制文件在文件尾进行读写/无文件创建新文件
	//FILE* pf = fopen("test.txt","r");//相对路径
	FILE* pf = fopen("D:\\test.txt","r");//绝对路径


	//写文件
	//字符输入函数-fgetc
	// 字符输出函数-fputc
	// 文本行输入函数-fgets
	// 文本行输出函数-fputs
	// 格式化输入函数-fscanf
	// 格式化输出函数-fprintf
	
	// 全输出流-FILE*
	// c程序打开默认打开三个流
	// stdin-标准输入流-键盘
	// stdout-标准输出流-屏幕
	// stderr-标准输出流-屏幕
	//fputs("shduh", stdout);

	// 二进制输入-fread
	// 二进制输出-fwrite
	//写文件
	//fputc('c', pf);
	//fputc('a', pf);
	//fputc('\n', pf);
	//fputc(' ', pf);
	//fputs("hello", pf);
	
	//读文件
	//int x = fgetc(pf);
	//printf("%c\n", x);
	//读到结尾返回EOF
	// 
	//从标准输入流获取信息
	//int y = fgetc(stdin);
	//printf("%c\n", y);
	//
	char arr[10]={0};
	fgets(arr,4,pf);//储存数组-读取个数-1-读取地址
	printf("%s", arr);

	//关闭文件
	fclose(pf);
	pf = NULL;
}