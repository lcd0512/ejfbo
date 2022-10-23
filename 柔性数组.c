#include <stdio.h>
#include <stdlib.h>
typedef struct Arr
{
	//柔性数组前面必须至少有一个成员
	//sizof不算柔性数组大小
	//用malloc分配内存-分配内存大小必须大于结构体大小
	int x;
	int arr[];//大小未知-arr[0]
}Arr;
void main()
{
	//希望arr大小是10个整形
	Arr* p= (Arr*)malloc(sizeof(Arr)+10*sizeof(int));
	p = (Arr*)realloc(p,sizeof(Arr)+40);
	free(p);
}