#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int A(char* x)
{
	int n;
	for (n = 0; x[n] != '\0'; n++)
	{
	}
	return n;
}

void B(char* x)
{
	int n = A(x);
	int right = n - 1;
	int left = 0;
	for (;; left++, right--)
	{
		if (left < right)
		{
			char a = x[left];
			x[left] = x[right];
			x[right] = a;
		}
		else if (left >= right)
		{
			printf("%s\n", x);
			break;
		}
	}
}

char C(char* x)
{
	int m = A(x)-1;
	char a = *x;
	*x = *(x + m);
	*(x + m) = a;
	if (A(x) > 2)
	{
		char m1 = *(x + m);
		*(x + m) = '\0';
		C(x + 1);
		*(x + m) = m1;
	}
}
void main()
{
	char arr[100];
	scanf("%s", arr);
	//printf("%s\n", arr);
	B(arr);
	C(arr);
	printf("%s\n", arr);

}