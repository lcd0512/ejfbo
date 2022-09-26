#include <string.h>
#include <stdio.h>
int main() {
	char arr[10];
	char arr1[] = "strcpy";
	//strcpy(a,b)-引用string.h-将b复制到a
	strcpy(arr, arr1);
	printf("%s\n", arr);
	//memset(a,b,c)-引用string.h-将a 替换内容b  替换长度c
	memset(arr, 'a', 3);
	printf("%s\n", arr);
	return 0;
}