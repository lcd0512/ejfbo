#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(int x,char* pos1,char* pos2,char* pos3)
{
	//pos1-起始位置，pos2-中转位置，pos3-目的地
	if (x == 1)
	{
		printf("%s -> %s\n",pos1, pos3);
	}
	if (x > 1)
	{
		A(x - 1, pos1, pos3, pos2);
		printf("%s -> %s\n", pos1, pos3);
		A(x - 1, pos2, pos1, pos3);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	A(n, "柱子1", "柱子2", "柱子3");
	return 0;
 }

