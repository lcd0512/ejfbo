#include <stdio.h>
void main()
{
	int a = 3;//
	int b = 7;//
	//1
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	//2
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
}