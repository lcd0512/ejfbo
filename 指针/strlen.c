#include <stdio.h>
#include <string.h>
int Strlen(char* x)
{
	int n = 0;
	//	while(*(x+n)!='\0')
	while(*(x++)!='\0')
	{
		n++;
	}
	return n;
}
void main()
{
	char arr[10] ="abcdefg";
	printf("%d\n",strlen(arr));
	printf("%d\n",Strlen(arr));

}