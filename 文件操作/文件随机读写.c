#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

typedef struct S
{
	char arr[10];
	int x;
	float y;
}S;
void main()
{
	S s = { "hello",20,5.5 };
	S tmp = { 0 };
	char brr[100] = { 0 };
	sprintf(brr, "%s %d %f", s.arr, s.x, s.y);
	printf("%s\n", brr);
	sscanf(brr, "%s %d %f", tmp.arr, &tmp.x, &tmp.y);
	printf("%s %d %f\n", tmp.arr, tmp.x, tmp.y);

	//�ļ������д-fseek
	FILE* p = fopen("D:\\test.txt", "r");
	if (p == NULL)
	{
		perror(":");
		exit(0);
	}

	int a =fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);
	a = fgetc(p);
	printf("%c\n", a);

	//SEEK_CUR-��ǰ�ļ�ָ��λ��
	//SEEK_END-�ļ�ĩβ��ʼƫ��
	//SEEK_SET-�ļ���ʼλ��
	fseek(p,5,SEEK_SET);
	a = fgetc(p);
	printf("%c\n", a);

	//���ص�ǰƫ����-ftell
	int n = ftell(p);
	printf("%d\n", n);
	//���ļ�ָ��ص���ʼλ��-rewind
	rewind(p);
	n = ftell(p);
	printf("%d\n", n);

	fclose(p);
	p = NULL;
	FILE* p1 = fopen("D:\\test1.txt", "wb");
	int a1 = 100;
	fwrite(&a1,4,1,p1);
	fclose(p1);
	p1 = NULL;

	//feof-�ж��Ƿ�ɹ���ȡ���ļ�/����ԭ��-���ط����ȡʧ�ܽ���-��������������
	//fgetc��ȡ��������EOF
	//fgets��ȡ�������ش���ַ����ռ���ʼ��ַ
	//fread�����ڶ�ȡʱ�򷵻ص���ʵ�ʶ�ȡ����Ԫ�ظ���-�����С��ָ����ȡ������Ϊ���һ�ζ�ȡ
	
	//fflush-ˢ�»�����
}	