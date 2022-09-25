#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
void A1()
{
	int i = 1, a = 1, b = 0, n = 0;
	scanf("%d", &n);
	for (a = 0; i <= n; i++)
	{
		a = 1;
		for (int j = 1; j <= i; j++)
		{
			a *= j;
		}
		b += a;
		printf("%d\n", b);

	}
	int a1, b1, i1, m = 0;
	scanf("%d", &m);
	for (a1 = 1, i1 = 1, b1 = 0; i1 <= m; i1++)
	{
		a1 *= i1;
		b1 = a1 + b1;
		printf("%d\n", b1);
	}
}
void A2()
{
	int a = 0;
	int xz = 0;
	int zh = 0;
	char arr[10];
	char arr2[10];
	char arr3[10];
	char arr4[10];
	char jz1[100];
	char jz2[100];
	char zym[] = "#                     ×¢²áÕËºÅ                     #\n#                       µÇÂ¼                       #\n";
	printf("%s", zym);
	
	
	printf("%s", zym);
	for (int b =0;;)
	{
		b = getchar();
		if(b == 'w')
			a++;
		if (b == 's')
			a += 1;
		if (a % 2)
			zym[21] = '>', zym[30] = '<', zym[76] = ' ', zym[81] = ' ', xz = 1;
		if (a!=0&&a % 2 == 0)
			zym[21] = ' ', zym[30] = ' ', zym[76] = '>', zym[81] = '<', xz = 2;
		system("cls");
		printf("%s", zym);
		if (xz == 1&&b == ' ') {
			if (zh == 1) {
				system("cls");
				printf("ÒÑÓÐÕËºÅ£º%s\n", arr2);
				Sleep(500);
				system("cls");
			}
			else if (zh == 0) {
				system("cls");
				printf("ÇëÊäÈëÕËºÅ£º");
				scanf("%s", &arr2);
				system("cls");
				printf("³É¹¦ÉèÖÃÕËºÅ£º%s \n", arr2);
				while (getchar() != '\n') {
					getchar();
				}
				printf("ÇëÊäÈëÃÜÂë£º");
				scanf("%s", arr);
				printf("³É¹¦ÉèÖÃÃÜÂë£º%s", arr);
				Sleep(500);
				system("cls");
				zh = 1;
			}
		}
		if (xz == 2 && b == ' ')
		{
			system("cls");
			printf("ÇëÊäÈëÕËºÅ£º");
			
			scanf("%s", arr3);
			while (getchar() != '\n') {
				getchar();
			}
			printf("ÇëÊäÈëÃÜÂë£º");
			scanf("%s", arr4);
			if (getchar() == '\n') {
				if (strcmp(arr2,arr3)==0) {
					Sleep(500);
					system("cls");
					printf("µÇÂ¼ÖÐ\n");
					for (int i = 0;i<100;i++) {
						jz1[i] = '>';
						printf("%c",jz1[i]);
						Sleep(25);
					}
					for (int i =99;i>=0;i--) {
						system("cls");
						jz1[i] = '=';
						for (int i1 = 0; i1 < 100; i1++) {
							printf("%c", jz1[i1]);
						}
					}
					
				}
				else {
					printf("ÕËºÅ»òÕßÃÜÂë´íÎó\n");
					Sleep(500);
					system("cls");
				}
			}
		}
	}
}
int main()
{
	//A1();
	A2();
	return 0;
}