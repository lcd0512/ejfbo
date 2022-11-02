#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void P_2()
{
	int x = 0;
	printf("ÇëÊäÈëÊı×Ö:");
	scanf("%d",&x);
	switch (x)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thuresday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default:
		printf("³ö´í\n");
		break;
	}
}