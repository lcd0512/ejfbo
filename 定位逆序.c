#include <stdio.h>
void A(char* x, char* y)
{
	while ( x<y )
	{
		char z = *x;
		*x = *y;
		*y = z;
		x++;
		y--;
	}
}
void B(char* x, int y)
{
	int j = 0;
	for (int i =0;;i++)
	{
		if (*(x + i) == ' '||*(x + i)=='\0')
		{
			A(x+j, x + i-1);
			j = i+1;
			if (*(x + i) == '\0')
			{
				break;
			}
		}
	}

}
void main()
{
	char arr[100];
	gets(arr);
	int len = strlen(arr)-1;
	A(arr, arr + len);
	B(arr, len);
	printf("%s\n", arr);
}