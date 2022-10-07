//结构体-一些值的集合-值的类型可以不同
#include<stdio.h>
struct B
{
	int a;
	int b;
}b;
struct STU
{
	//成员变量-可以是指针数组标量或者其他结构体
	//struct B b-甚至可以套娃
	struct B b;
	char name[10];
	int age;
	int id;
};//此处可s,s1;是全局变量
void Print(struct STU x)
{
	printf("%d %d %s %d %d\n", x.b.a, x.b.b, x.name, x.age, x.id);
}
void Print1(struct STU* x)
{
	printf("%d %d %s %d %d\n", x->b.a, x->b.b, x->name, x->age, x->id);
}
void main()
{
	struct STU A = {{1,2}, "张三",18,44088};
	//结构体访问   .    ->
	printf("%d %d %s %d %d\n",A.b.a,A.b.b, A.name, A.age, A.id);
	struct STU* p = &A;
	printf("%d %d %s %d %d\n", (*p).b.a, (*p).b.b, (*p).name, (*p).age, (*p).id);
	printf("%d %d %s %d %d\n", p->b.a, p->b.b, p->name, p->age, p->id);
	//函数访问结构体
	Print(A);//传值调用
	Print1(&A);//传址调用-占用内存少-且函数内可更改A
}
