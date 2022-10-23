#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef struct Word
{
	char arr[10];
	int x;
	float y;
}Word;

void main()
{
	FILE* p =fopen("D:\\test.txt", "r+");
	Word s = { "hello",5,8.99f };
	fprintf(p,"%s %d %f",s.arr,s.x,s.y);
	fclose(p);
	p = NULL;
	p = fopen("D:\\test.txt", "r");
	Word Aa;
	fscanf(p, "%s %d %f", Aa.arr, &(Aa.x), &(Aa.y));
	fclose(p);
	p = NULL;
	printf("%s %d %f", Aa.arr, Aa.x, Aa.y);
}