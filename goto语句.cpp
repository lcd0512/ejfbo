#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//aa:					
//goto aa;
//ִ�е�goto�ǻ���ת��aa����ʼִ��
//����goto������Ƕ��ѭ���ȵ�
//goto���ֻ����һ����������ת���ܿ纯��
int main()
{
	//�ػ�����
	//��������60��ػ����������1��ȡ���ػ�
	//window�ػ�����- shutdow -s -t 60		-s���ùػ� -t����ʱ��	60ʱ����
	//ȡ���ػ�- shutdown -a/			-p ��ػ�
	//c�����ṩ��һ��������system����-ִ��ϵͳ����*-����stdlib.h
	//ʹ���������ӵ��������Զ�����..............����ֱ������
	//ע�����
	// create ceshi binpath = D:\ceshi\ceshi.exe type = own start = auto displayname = ceshi
	//binpath�����Ӧ�ó������ڵ�·����
	//displayname��������ʾ������0
	//����жϷ����Ƿ�ע��ɹ���
	//��cmd������services.msc��ϵͳ���񣬲鿴�Ƿ����ceshi���Ƶķ��񣨼�displayname = ����Ĳ�������������ceshi��
	//��������-net start ceshi
	//ֹͣ����-net stop ceshi
	//ɾ������-sc delete "ceshi"
	char arr[10];
	a:
	system("shutdown -s -t 60");
	printf("������һ�����ڹػ�\n����������ȡ���ػ�\n");
	scanf("%s", arr);
	if (strcmp(arr,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto a;
	}
	return 0;
}