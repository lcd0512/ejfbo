#include "contact.h"

//检测容量
void checkCapacity(Contact* x)
{
	if (x->sz == x->max)
	{
		PeoInfo* p = (PeoInfo*)realloc(x->data, (x->max + 2) * sizeof(PeoInfo));
		if (p != NULL)
		{
			x->data = p;
			x->max += 2;
		}
		else
		{
			perror("失败");
			return 0;
		}
	}
}
void LoadContact(Contact* x)
{
	FILE* p = fopen("D:\\test.txt", "rb");
	if (p == NULL)
	{
		perror(":");
		return 0;
	}
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, p))
	{
		checkCapacity(x);
		x->data[x->sz] = tmp;
		x->sz++;
	}

	fclose(p);
	p = NULL;
}
//初始化通讯录
void InitContact(Contact* x)
{
	x->sz = 0;
	x->max = MAX_DATA;
	x->data = (Contact*)malloc(3*sizeof(PeoInfo));
	//加载文件
	LoadContact(x);
}


void Print(const Contact* x)
{
	system("cls");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","地址");
	for (int i = 0; i < x->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", x->data[i].name, x->data[i].age, x->data[i].sex, x->data[i].tele, x->data[i].addr);
	}
	Sleep(2000);
}
//添加信息
void AddContact(Contact* x)
{
	checkCapacity(x);
	printf("名字:");
	scanf("%s",x->data[x->sz].name);
	printf("年龄:");
	scanf("%d", &x->data[x->sz].age);
	printf("性别:");
	scanf("%s",x->data[x->sz].sex);
	printf("电话:");
	scanf("%s",x->data[x->sz].tele);
	printf("地址:");
	scanf("%s",x->data[x->sz].addr);
	x->sz++;
	printf("成功\n");
	Sleep(1000);
}
//查找信息
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
	printf("请输入查找名字:");
	scanf("%s", name);
	if (FinByName(x, name) == 0)
		printf("查无此人\n");
	else
	{
		int i = FinByName(x, name);
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\n", x->data[i].name, x->data[i].age, x->data[i].sex, x->data[i].tele, x->data[i].addr);
		Sleep(1000);
		system("cls");
	}
}
//删除信息
void DelContact(Contact* x)
{
	if (x->sz == 0)
	{
		printf("无信息删除\n");
		return 0;
	}
	char name[MAX_NAME]={0};
	scanf("%s", name);
	if (FinByName(x,name) == 0)
		printf("查无此人\n");
	else
		for (int i =FinByName(x, name); i < x->sz-1; i++)
		{
			x->data[i] = x->data[i + 1];
		}
	x->sz--;
	printf("删除成功\n");
	Sleep(1000);
	system("cls");
}
void ModifyContact(Contact* x)
{
	char name[MAX_NAME] = { 0 };
	printf("请输入查找名字:");
	scanf("%s", name);
	if (FinByName(x, name) == 0)
		printf("查无此人\n");
	else
	{
		int i = FinByName(x, name);
		printf("名字:");
		scanf("%s", x->data[i].name);
		printf("年龄:");
		scanf("%d", &x->data[i].age);
		printf("性别:");
		scanf("%s", x->data[i].sex);
		printf("电话:");
		scanf("%s", x->data[i].tele);
		printf("地址:");
		scanf("%s", x->data[i].addr);
		printf("修改成功\n");
		Sleep(1000);
	}
}
//保存
void SaveContact(Contact* x)
{
	FILE* p = fopen("D:\\test.txt", "wb");
	if (p == NULL)
	{
		perror(":");
		return 0;
	}
	for (int i = 0; i < x->sz; i++)
	{
		fwrite(x->data+i, sizeof(PeoInfo), 1, p);
	}
	fclose(p);
	p = NULL;
}