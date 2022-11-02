#include "Practice.h"

void menu()
{
	printf("1.成绩判定\n");
	printf("2.星期\n");
	printf("3.被7整除\n");
	printf("4.水仙花数\n");
	printf("5.求sun\n");
	printf("6.六\n");
	printf("7.求阶梯\n");
	printf("0.退出\n");
	printf("输入数字选择项目:");
}
void main()
{
	int xz = -1;
	//循环菜单
	do
	{
		menu();
		scanf("%d",&xz);
		system("cls");
		switch (xz)
		{
			case 0:
				break;
			case P1:
			{
				P_1();
				break;
			}
			case P2:
			{
				P_2();
				break;
			}
			case P3:
			{
				P_3();
				break;
			}
			case P4:
			{
				P_4();
				break;
			}
			case P5:
			{
				P_5();
				break;
			}
			case P6:
			{
				P_6();
				break;
			}
			case P7:
			{
				P_7();
				break;
			}
			default:
			{
				xz = -1;
				printf("无此选项");
				Sleep(500);
				break;
			}
		}

	} while (xz);

}