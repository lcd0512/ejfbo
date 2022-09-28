#include <stdio.h>
int main()
{
	double i = 1,a = 0;
	for (int n =1;n<=100;n++)
	{
		a = a + (i / n);
		i = -i;
	}
	printf("%.5lf", a);
}