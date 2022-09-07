//字符串就是一串字符-用双引号括起来的一串字符
#include <stdio.h>
#include <string.h>
int main()

{
	"hello";
	//字符串在结尾隐藏了一个\0的字符-是字符窜结束的标志
	"windows\0";
	//证明
	//字符数组-数组是一组相同类型的元素
	//当[]中不填写大小时将根据后字符大小决定
	char arr[] = "family";
	//F10-调试-窗口-监视
	char arr1[] = "family";
	char arr2[] = {'a', 'b ','c' };
	char arr3[] = { 'a','b','c','\0' };
	//打印字符串
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%s\n", arr);
	//求一下字符串的长度
	//strlen-既为string length
	strlen("family");
	int len = strlen("family");
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	return 0;
}