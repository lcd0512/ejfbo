#include "contact.h"
//��ʼ��ͨѶ¼
void InitContact(Contact* x)
{
	x->sz = 0;
	x->max = MAX_DATA;
	x->data = (Contact*)malloc(3*sizeof(PeoInfo));
}


void Print(const Contact* x)
{
	system("cls");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
	for (int i = 0; i < x->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", x->data[i].name, x->data[i].age, x->data[i].sex, x->data[i].tele, x->data[i].addr);
	}
	Sleep(2000);
}
//�����Ϣ
void AddContact(Contact* x)
{
	if (x->sz == x->max)
	{
		PeoInfo* p=(PeoInfo*)realloc(x->data,(x->max+ 2) * sizeof(PeoInfo));
		if (p != NULL)
		{
			x->data = p;
			x->max += 2;
		}
		else
		{
			perror("ʧ��");
			return 0;
		}
	}
	printf("����:");
	scanf("%s",x->data[x->sz].name);
	printf("����:");
	scanf("%d", &x->data[x->sz].age);
	printf("�Ա�:");
	scanf("%s",x->data[x->sz].sex);
	printf("�绰:");
	scanf("%s",x->data[x->sz].tele);
	printf("��ַ:");
	scanf("%s",x->data[x->sz].addr);
	x->sz++;
	printf("�ɹ�\n");
	Sleep(1000);
}
//������Ϣ
int FinByName(Contact* x,char name[])
{
	for (int i = 0; i < x->sz; i++)
	{
		if (strcmp(x->data[i].name, name) == 0)
			return i;
	}
	return 0;
}
void BySearch(Contact* x)
{
	char name[MAX_NAME] = { 0 };
	printf("�������������:");
	scanf("%s", name);
	if (FinByName(x, name) == 0)
		printf("���޴���\n");
	else
	{
		int i = FinByName(x, name);
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", x->data[i].name, x->data[i].age, x->data[i].sex, x->data[i].tele, x->data[i].addr);
		Sleep(1000);
		system("cls");
	}
}
//ɾ����Ϣ
void DelContact(Contact* x)
{
	if (x->sz == 0)
	{
		printf("����Ϣɾ��\n");
		return 0;
	}
	char name[MAX_NAME]={0};
	scanf("%s", name);
	if (FinByName(x,name) == 0)
		printf("���޴���\n");
	else
		for (int i =FinByName(x, name); i < x->sz-1; i++)
		{
			x->data[i] = x->data[i + 1];
		}
	x->sz--;
	printf("ɾ���ɹ�\n");
	Sleep(1000);
	system("cls");
}
void ModifyContact(Contact* x)
{
	char name[MAX_NAME] = { 0 };
	printf("�������������:");
	scanf("%s", name);
	if (FinByName(x, name) == 0)
		printf("���޴���\n");
	else
	{
		int i = FinByName(x, name);
		printf("����:");
		scanf("%s", x->data[i].name);
		printf("����:");
		scanf("%d", &x->data[i].age);
		printf("�Ա�:");
		scanf("%s", x->data[i].sex);
		printf("�绰:");
		scanf("%s", x->data[i].tele);
		printf("��ַ:");
		scanf("%s", x->data[i].addr);
		printf("�޸ĳɹ�\n");
		Sleep(1000);
	}
}