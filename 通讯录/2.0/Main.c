#include "contact.h"
void menu()
{
	printf("1.add\n");
	printf("2.del\n");
	printf("3.search\n");
	printf("4.modify\n");
	printf("5.sort\n");
	printf("6.print\n");
	printf("0.exit\n");
}
void main()
{
	int xz = -1;
	Contact con;
	//初始化
	InitContact(&con);
	do
	{
		xz = -1;
		menu();
		scanf("%d", &xz);
		switch (xz)
		{
		case Add:
			//增加信息
			AddContact(&con);
			break;
		case Del:
			DelContact(&con);
			break;
		case Search:
			BySearch(&con);
			break;
		case Modify:
			ModifyContact(&con);
			break;
		case Sort:
			break;
		case print:
			Print(&con);
			break;
		case Exit:
			xz = 0;
			free(con.data);
			break;
		default:
			break;
		}
		system("cls");
	} while (xz);
}