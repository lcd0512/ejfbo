#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void A(int x,char* pos1,char* pos2,char* pos3)
{
	//pos1-��ʼλ�ã�pos2-��תλ�ã�pos3-Ŀ�ĵ�
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
	A(n, "����1", "����2", "����3");
	return 0;
 }

