#include <stdio.h>
struct Book
{
	char name[20];
	char id[10];
};
void main()
{
	struct Book s = { "ргргрг","20030512"};
	struct Book* p = &s;
	printf("%s %s",s.name, s.id);
	printf("%s %s",(*p).name, (*p).id);
	printf("%s %s",p->name, p->id);
	
}