#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct Word
{
	char arr[10];
	int x;
	float y;
}Word;

void main()
{
	Word s = { "hello",5,5.5 };
	FILE* p = fopen("D:\\test.txt","wb");
	fwrite(&s,sizeof(Word),1,p);
	fclose(p);
	p = NULL;
	Word A = { 0 };
	p = fopen("D:\\test.txt", "rb");
	fread(&A, sizeof(Word), 1, p);
	fclose(p);
	p = NULL;
	printf("%s %d %f", A.arr, A.x, A.y);
}