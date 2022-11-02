#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void P_1()
{
	int a = -1;
	char b = 0;
	while (0 >a || a > 100)
	{
		printf("请输入成绩(0-100):");
		scanf("%d",&a);
	}
	if (a>=90)
		b = 'A';
	else if (a >=80)
		b = 'B';
	else if (a >= 70)
		b = 'C';
	else if (a >= 60)
		b = 'D';
	else
		b = 'E';
	printf("学生成绩评价为: %c\n",b);
}