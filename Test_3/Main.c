#include "Practice.h"

void menu()
{
	printf("1.�ɼ��ж�\n");
	printf("2.����\n");
	printf("3.��7����\n");
	printf("4.ˮ�ɻ���\n");
	printf("5.��sun\n");
	printf("6.��\n");
	printf("7.�����\n");
	printf("0.�˳�\n");
	printf("��������ѡ����Ŀ:");
}
void main()
{
	int xz = -1;
	//ѭ���˵�
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
				printf("�޴�ѡ��");
				Sleep(500);
				break;
			}
		}

	} while (xz);

}