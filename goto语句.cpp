#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//aa:					
//goto aa;
//执行到goto是会跳转到aa处开始执行
//可用goto跳出多嵌套循环等等
//goto语句只能在一个函数内跳转不能跨函数
int main()
{
	//关机程序
	//运行起来60秒关机；如果输入1就取消关机
	//window关机命令- shutdow -s -t 60		-s设置关机 -t设置时间	60时间秒
	//取消关机- shutdown -a/			-p 秒关机
	//c语言提供了一个函数：system（）-执行系统命令*-引用stdlib.h
	//使用命令将其添加到服务且自动运行..............舍友直呼内行
	//注册服务：
	// create ceshi binpath = D:\ceshi\ceshi.exe type = own start = auto displayname = ceshi
	//binpath：你的应用程序所在的路径。
	//displayname：服务显示的名称0
	//如何判断服务是否注册成功：
	//在cmd中输入services.msc打开系统服务，查看是否出现ceshi名称的服务（即displayname = 后面的参数，我这里是ceshi）
	//启动服务-net start ceshi
	//停止服务-net stop ceshi
	//删除服务-sc delete "ceshi"
	char arr[10];
	a:
	system("shutdown -s -t 60");
	printf("电脑在一分钟内关机\n输入我是猪取消关机\n");
	scanf("%s", arr);
	if (strcmp(arr,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto a;
	}
	return 0;
}