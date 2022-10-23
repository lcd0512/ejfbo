#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 12
#define MAX_DATA 3
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef enum Open
{
	Exit,
	Add,
	Del,
	Search,
	Modify,
	Sort,
	print
}Open;
typedef struct Contact
{
	int sz;
	int max;
	PeoInfo *data;
}Contact;
void InitContact(Contact* x);
void AddContact(Contact* x);
void Print(Contact* x);
int FinByName(Contact* x,char name[]);
void DelContact(Contact* x);
void BySearch(Contact* x);
void ModifyContact(Contact* x);
void SaveContact(Contact* x);
void LoadContact(Contact* x);
void checkCapacity(Contact* x);