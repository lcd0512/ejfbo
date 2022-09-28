//µİ¹éÓëµü´ú
#include <stdio.h>
int A(int x)
{
	if (1 < x)
	{
		return x * A(x - 1);
	}
	else
		return 1;
}
void main()
{
	printf("%d",A(3));
}
