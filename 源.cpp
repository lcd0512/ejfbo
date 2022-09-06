#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("可恶\n");
	printf("1");
	printf("2");
	printf("3\n4\n5\n");
	//字符类型
	//char 字符数据类型
	// short 短整型
	//int 整形
	// long 长整型
	// long long 更长的整形
	// float单精度浮点值
	//double 双精度浮点值
	//创建cahr类型空间变量ch，将字符a放入ch
	//局部变量与全局变量冲突，局部变量优先
	char ch = 'kewu';
	//打印整数-%d-%zd
	//double-%lf
	//float-%f
	printf("%d\n", 100);
	//sizeof-关键字-操作符-计算类型或许变量所占空间大小-单位-字节byte
	//计算机单位
	//bit比特
	//byte字节=8bit
	//kb=1024byte
	//mb=1024kb
	//gb=1024mb
	//tb=1024gb
	//pb=1024tb
	//c语言标准sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	int zs = 0;
	double sfdz = 0.00;
	printf("%d\n", zs);
	printf("%lf\n", sfdz);
	zs = zs + 1;
	sfdz = sfdz + 0.12;
	printf("%d\n", zs);
	printf("%lf\n", sfdz);
	//求两个整数的和
	//scanf函数是输入函数
	int a = 0;
	int b = 0;
	int sum = 0;
	//使用scanf需要define _CRT_SECURE_NO_WARNINGS 1
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	int c = 0;
	int sun = 0;
	scanf("%d", &c);
	sun = sum + c;
	printf("sun = %d\n", sun);
	return 0;
} 

