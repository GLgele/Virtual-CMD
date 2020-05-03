#include<bits/stdc++.h>
using namespace std;
void start()
{
	system("cls");
	system("pause");
}
void wait(int sec)
{
	if(sec == 1)
	{
		system("ping localhost -n 2 >nul");
	}
	else
	if(sec == 3)
	{
		system("ping localhost -n 3 >nul");
	}
	else
	if(sec == 5)
	{
		system("ping localhost -n 5 >nul");
	}
	else
	{
		system("msg * 错误的函数调用：使用了错误的参数于wait()");
	}
}
int main()
{
	string stri = "";
	int temp = 0;
	system("@echo off");
	system("chcp 65001");
	system("cls");
	while(1 == 1)
	{
		cout<<"Ccmd>";
		cin>>stri;
		if(stri == "start")
		{
			break;
		}
		if(stri == "faststart")
		{
			temp = 1;
			break;
		}
		if(stri == "exit")
		{
			exit(0);
		}
		cout<<"服务还未启动！\n";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout<<"[控制台]正在启动...\n";
		wait(3);
 	    cout<<"[控制台]正在读取数据...\n";
		wait(3);
		cout<<"[控制台]正在注册注册表...\n";
		wait(3);
		system("msg * -time:3 Register Successful !");
		wait(3);
		cout<<"[控制台]V-CMD已启动，以后可以通过faststart唤醒\n";
		start();
	}
}
