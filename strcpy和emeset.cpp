#include <string.h>
#include <stdio.h>
int main() {
	char arr[10];
	char arr1[] = "strcpy";
	//strcpy(a,b)-����string.h-��b���Ƶ�a
	strcpy(arr, arr1);
	printf("%s\n", arr);
	//memset(a,b,c)-����string.h-��a �滻����b  �滻����c
	memset(arr, 'a', 3);
	printf("%s\n", arr);
	return 0;
}