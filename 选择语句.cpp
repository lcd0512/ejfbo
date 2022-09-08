//选择语句
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("是不是(1/0)?>:");
	//获取输入值
	scanf("%d", &a);
	//判断输入值
	if (a == 1) {
		//当输入值等于1时
		printf("是\n");
	}
	//否则
	else
	{
		if (a == 0) {
			//当输入值不等于1等于0时
			printf("不是");
		}
		//当输入值不等于1和0时
		else {
			printf("请输入1/0");
		}
	}
	return 0;
}