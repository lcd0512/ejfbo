#include <stdio.h>
#include <string.h>
int my_strcmp(const char* x, const char* y)
{
	while (*x != '\0' && *y != '\0' && *(x++) == *(y++));
	return *x - *y;
}
void main()
{
	char* p = "abc";
	char* p1 = "abcd";

	printf("%d\n", strcmp(p, p1));
	printf("%d\n", my_strcmp(p, p1));
}