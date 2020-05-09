#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
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
		cout<<"Service has not been started. \n";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout<<"[Console]Starting...\n";
		wait(3);
 	   	cout<<"[Console]Reading data...\n";
		wait(3);
		cout<<"[Console]is registering the registry...\n";
		wait(3);
		system("msg * -time:3 registration succeeded !");
		wait(3);
		cout<<"[Console]v-cmd has been started, you can wake up through faststart later \n";
		start();
	}
}
void start()
{
	system("cls");
	system("pause");
	system("cls");
	cout<<"DreamBorderX VirtualCMD [Ver 1.0.0]\n (c) 2020 DreamBorderX & GLgele。All rights reserved. \n";
	while(1 == 1)
	{
		cout<<"\nVcmd>";
		cin>>stri;
		if(stri == "exit")
		{
			system("cls");
			exit(0);
		}
		else if(stri == "help")
		{
			cout<<"The simulated CMD is written by GLgele. The command is in command.txt.\n";
		}
		else if(stri == "lincense")
		{
			cout<<"Please check the lincense file.\n";
		}
		else if(stri == "credits")
		{
			cout<<"Dream Border X \n"<<"GLgele \n";
		}
		else if(stri == "copyright")
		{
			cout<<"(c) 2020 DreamBorderX & GLgele。All rights reserved. \n";
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
			cout<<"The command does not exist, please enter help to view help!\n";
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
