#include<bits/stdc++.h>
using namespace std;
string stri = "";
void start();
void wait(int sec);
int main()
{
	int temp = 0;
	system("@echo off");
	system("cls");
	while(1 == 1)
	{
		cout<<"Vcmd>";
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
		cout<<"服务还未启动!";
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
		system("msg * -time:3 注册成功 !");
		wait(3);
		cout<<"[控制台]V-CMD已启动，以后可以通过faststart唤醒\n";
		start();
	}
}
void start()
{
	system("cls");
	system("pause");
	system("cls");
	cout<<"DreamBorderX VirtualCMD [版本 1.0.0]\n (c) 2020 DreamBorderX & GLgele。保留所有权利。 \n";
	while(1 == 1)
	{
		cout<<"Vcmd>";
		cin>>stri;
		if(stri == "exit")
		{
			exit(0);
		}
		else if(stri == "help")
		{
			cout<<"该模拟CMD由GLgele编写。指令在Command.txt里。";
		}
		else if(stri == "lincense")
		{
			cout<<"请查看lincense文件。\n";
		}
		else if(stri == "credits")
		{
			cout<<"Dream Border X \n"<<"GLgele \n";
		}
		else if(stri == "copyright")
		{
			cout<<"(c) 2020 DreamBorderX & GLgele。保留所有权利。 \n";
		}
		else if(stri == "exit")
		{
			exit(0);
		}
		else if(stri == "clear")
		{
			system("cls");
		}
		else
		{
			cout<<"不存在的命令，请输入help查看帮助！\n";
		}
		
	}
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