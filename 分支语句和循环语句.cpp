#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//��֧���
//if
//switch-Ҳ��һ�ַ�֧��䳣�����ڶ��֧�����
//ѭ�����
//while
// for
// do while
//goto���
// 
//break��������ѭ��-����switch
//default��switch��ͳһ������������
//continue��whileѭ���п��Է���ѭ�������ж�
// strcmp(a,b)==0 �Ա������ַ���-����string.h-���ڷ���0��С�ڷ���С��0���ڷ��ش���0
//���-���������ɣ������ľ���һ�����
//;-�����
// 
//if���
//�﷨�ṹ
// if (���ʽ)
//{
//	���;
//}
//if(���ʽ��
// {���1��
// else
// ���2��
// }
//  ���֧
// if(���ʽ1)
// ���1��
// else if(���ʽ2)
// ���2��
// else
// ���3��
//switch(���α��ʽ��
//{�����}
//�����-һЩcase���
//case ���γ������ʽ
//��䣻
//
//while�﷨�ṹ
//while (���ʽ)-���ʽΪ����㿪ʼѭ��
//ѭ����䣻
//
//for�ṹ
//for(���ʽ1�����ʽ2�����ʽ3��-1����ʼ����2-�жϣ���������
//ѭ����䣻
//
// //do....while  ѭ���ṹ
// do
// ѭ����䣨��ִ�к��жϣ�
// while�����ʽ��
// 
//getchar()��ȡ����(�ַ���gets���ַ�����
// //CTRL+z��ȡ����
// putcher()����ַ�
//EOF-end of file �ļ��Ľ������-������-1
//getchar-scanf-���ӻ�������ȡ����
//�س���\n���ᴥ��scanf��ȡ����-�пո���ȡ���ո�ǰ�ļ�
//getcharʶ�𻺴������ݿ����ȴ�
//������������getcahr��ȡ���
//������
//while((����=getchar())!='\n'){;}
//���ַ������ڻس�ʱ����ѭ����ȡֱ���س�
void ifyjv()
{
	int a = 0;
	scanf("%d", &a);
	if (a >= 18&&a<=30)
	{
		printf("����\n");
	}
	//
	//else if(30<a<60)����д���Ǵ����a�����Ⱥ�30�Ƚ�Ϊ���Ϊ1��1С��60
	else if (30 < a && a < 60)
	{
		printf("����\n");
	}
	else if (a < 100 && a >= 60)
	{
		printf("����\n");
	}
	else
	{
		printf("??????\n");
	}
	//����else����
	int c = 0;
	int d = 2;
	if (c == 1)
		if (d == 2)
			printf("1");
		else
			printf("2");
	//���ʲô������ӡ
	//else�������ifƥ��
}
void lx1()
{
	//�ж�һ�����Ƿ�Ϊ����
	int a = 0;
	scanf("%d", &a);
	if (a % 2)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
}
void lx2()
{
	//����100�������1��100������
	int i = 1;
	while (i <= 100)
	{
		if (i % 2)
		{
			printf("%d\n", i);
		}
		i++;
	}
}
void lx3()
{//ͬ��
	int i = 0, n = 0, f = 0, arr[100], arr2[100];
	//����
	while (i < 100)
	{
		arr[n] = n + 1;
		printf("%d\n", arr[n]);
		if (arr[n] % 2)
		{
			arr2[f] = arr[n];
			f++;
		}
		i++, n++;
	}
	i = 0;
	while (i < f)
	{
		printf("%d\n", arr2[i]);
		i++;
	 }
}
void Switch()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)//aΪ���Σ�����ֵ
	{
		//aֵ�������
		//breakΪ����
	case 1:
	{
		printf("����һ\n");
		//��û�������ֹʱ�������¼���ִ��
		break;
		//break����
	}
	case 2:
	{
		printf("���ڶ�\n");
		break;
	}
	case 3:
	{
		printf("������\n");
		break;
	}
	}
	//����1-5���������67��Ϣ��-����ֵ����
	int b = 0;
	scanf("%d", &b);
	switch (b)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default://��������ִ��
		printf("�������\n");
			break;
	}
}
void xh()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
		case 1: {
			int i = 0;
			while (i < 10)
			{
				printf("%d\n", i);
				i++;
			}
			i = 0;
			while (i < 5)
			{
				if (i == 3)
					break;
				printf("%d\n", i);
				i++;
			}
			i = 0;
			while (i < 5)
			{
				i++;
				if (i == 3)
				{
					continue;
				}
				printf("%d\n", i);
			}
			break;
		}
		case 2: {
			int  i = 0;
			for (i = 1; i < 10; i++)
			{
				printf("%d\n", i);
			}
			break;
		}
		case 3: {
			int a = 0;
			do
			{
				printf("%d\n", a);
				a++;
			} while (a<5);
			break;
		}
	}
}
void huoqv()
{
	int a = 0;
	while ((a = getchar()) != EOF) 
	{
		putchar(a);
		//ctrl +z�˳�ѭ��
		if (a == 'TZ')
		{
			break;
		}
	}

}
void mima()
{
	int a = 0;
	char arr[10]={0};
	printf("���������룺");
	scanf("%s", arr);
	//��ʱ���������
	while ((a = getchar()) != '\n'); {; }
	printf("��ȷ�����루Y/N����");
	int b = getchar();
	if (b == 'Y') { printf("�ɹ���%s", arr); }
	if (b == 'N') { printf("ʧ��"); }
}
void eff(){
	int arr[100]={0};
	for (int i =0;i<100;i++)
	{
		arr[i] = i + 1;
	}
	int a, pjz, left, right;
	int cd = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &a);
	for (left = 0,right = cd-1;0<a<=100;)
	{
		pjz = (left + right) / 2;
		if (a<pjz)
		{
			right = pjz;
		}
		else if (a > pjz)
		{
			left = pjz;
		}
		else if (a == pjz)
		{
			printf("�±�Ϊ��%d\nֵΪ��%d\n",a-1 ,arr[a-1]);
			break;
		}
	}
}
void DY() {
	 char arr[] = ">>>>>>>>>>-<<<<<<<<<<";
	char arr1[] = "#####################";
	int left = 0;
	int right = strlen(arr)-1;
	printf("%s\n", arr1);
	system("cls");
	while(left<=right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		printf("%s\n", arr1);
		//Sleep-����-����include <Windows.h>
		Sleep(250);
		//system("cls")-�����Ļ
		system("cls");
		left++;
		right--;
	}

}
void csz() {
	printf("1.��ʼ��Ϸ\n2.�˳���Ϸ\n");
	printf("��ѡ��:");
	int xz1=0;
	scanf("%d", &xz1);
	switch (xz1)
	{
	case 1: {
		//1.���������-rand-��Ҫ����stdlib.h
		//2.srand-����������
		//ǿ������ת����srand����
		//3.time()��ȡʱ��-����-����-time.h
		srand((unsigned int)time(NULL));
		int a = rand() % 100+1;
		//rand������0-32767����,��Ҫ0��100���������%100������Ϊ0��99����1����0��100
		//printf("%d\n", a);
		//������
		for (int b;;) {
			b;
			scanf("%d", &b);
			if (a == b) {
				printf("�¶���\n");
				Sleep(500);
				system("cls");
				break;
			}
			else if (a < b) {
				printf("�´���\n");
			}
			else if (a > b) {
				printf("��С��\n");
			}
		}
		csz();
		break;
	}
	case 2: {
		break;
	}
	default:{
		system("cls");
		printf("������1/2");
		Sleep(500);
		system("cls");
		csz();
		  }
	}
}
int main()
{
	int xz = -1;
	scanf("%d", &xz);
	//if���-1
	//switch-5
	//ѭ�����-6
	switch (xz)
	{
	case 0:return 0;
	case 1:ifyjv();break;
	case 2:lx1();break;
	case 3:lx2();break;
	case 4:lx3();break;
	case 5:Switch();break;
	case 6:xh(); break;
	case 7:huoqv(); break;
	case 8:mima(); break;
	case 9:eff(); break;
	case 10:DY(); break;
	case 11:csz(); break;
	default:{
		printf("����������\n");
		main();

	}
	}
}
