#include "game.h"
void game()
{
	//������ͼ
	char borad[DOW][COL]={0};
	//��ʼ����ͼ
	for (int i = 0; i < DOW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			borad[i][j] = ' ';
		}
	}
	//����
	print(&borad);
	//��ʼ����
	struct Snaek* snaek;
	snaek = (struct Snaek*)malloc(sizeof(struct Snaek));
	intsnaek(snaek);
	//��ӡ
	printsnaek(snaek);
	Sleep(1000);
	//��ʼ
	play(snaek);
}
void main()
{
	//���������
	srand((unsigned int )time(NULL));
		int xz = 0;
		printf("1.��ʼ��Ϸ\n2.�˳���Ϸ\n");
		scanf("%d", &xz);
		switch (xz)
		{
		case 1:
		{
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
			printf("������1/2\n");
			break;
		}
		}
}