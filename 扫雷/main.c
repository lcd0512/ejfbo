#include "game.h"

void game()
{
	char board[ROW][COL];
	char mine[ROW][COL];
	//��������/����
	Intsoard(board,ROW,COL,'*');
	Intsoard(mine, ROW, COL,'0');
	//������
	Intmine(mine,ROW,COL);
	//��ӡ
	Printboard(mine, ROW, COL);
	Printboard(board, ROW, COL);
	//���
	Play(board,mine,ROW,COL);
}
void main()
{
	//�������ֵ
	srand((unsigned int)time(NULL));
	do
	{
		printf("1.��ʼ��Ϸ\n2.�˳���Ϸ\n��ѡ��");
		int n;
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			system("cls");
			game();
			break;
		}
		case 2:
		{
			return;
			break;
		}
		default:
		{
			printf("������1/2");
			Sleep(250);
			system("cls");
			break;
		}
		}
	} while (1);
}