#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

typedef struct S
{
	char arr[10];
	int x;
	float y;
}S;
void main()
{
	S s = { "hello",20,5.5 };
	S tmp = { 0 };
	char brr[100] = { 0 };
	sprintf(brr, "%s %d %f", s.arr, s.x, s.y);
	printf("%s\n", brr);
	sscanf(brr, "%s %d %f", tmp.arr, &tmp.x, &tmp.y);
	printf("%s %d %f\n", tmp.arr, tmp.x, tmp.y);

	//文件随机读写-fseek
	FILE* p = fopen("D:\\test.txt", "r");
	if (p == NULL)
	{
		perror(":");
		exit(0);
	}

	int a =fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);

	//SEEK_CUR-当前文件指针位置
	//SEEK_END-文件末尾开始偏移
	//SEEK_SET-文件起始位置
	fseek(p,5,SEEK_SET);
	a = fgetc(p);
	printf("%c\n", a);

	//返回当前偏移量-ftell
	int n = ftell(p);
	printf("%d\n", n);
	//让文件指针回到起始位置-rewind
	rewind(p);
	n = ftell(p);
	printf("%d\n", n);

	fclose(p);
	p = NULL;
	FILE* p1 = fopen("D:\\test1.txt", "wb");
	int a1 = 100;
	fwrite(&a1,4,1,p1);
	fclose(p1);
	p1 = NULL;

	//feof-判断是否成功读取完文件/结束原因-返回非零读取失败结束-返回零正常结束
	//fgetc读取结束返回EOF
	//fgets读取结束返回存放字符串空间起始地址
	//fread函数在读取时候返回的是实际读取完整元素个数-如果其小于指定读取个数则为最后一次读取
	
	//fflush-刷新缓冲区
}	