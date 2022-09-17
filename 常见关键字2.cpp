//常见关键字
//全局变量
int h22 = 2022;
//当被static修饰时全局变量不可被其他文件使用
//static int h= 2022;
int add(int x, int y)
{
	int z = x + y;
	return z;
}
//当函数被static修饰时其他文件无法引用此函数