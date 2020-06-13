#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include "vcmdH.h"
using namespace std;
#ifndef _VCMD_H_
#define _VCMD_H_

void wait(int sec)
{
	if(sec == 1)
	{
		system("ping localhost -n 2 >nul");
		return;
	}
	else
	if(sec == 3)
	{
		system("ping localhost -n 3 >nul");
		return;
	}
	else
	if(sec == 5)
	{
		system("ping localhost -n 5 >nul");
		return;
	}
	else
	{
		system("msg * 错误的函数调用：使用了错误的参数于wait()");
		return;
	}
}

void start()
{
	system("cls");
	system("pause");
	system("cls");
	cout<<"DreamBorderX VirtualCMD [Version 1.0.0]\n (c) 2020 DreamBorderX & GLgele.All rights reserved. \n";
	while(1 == 1)
	{
		cout<<"\nVcmd>";
		string stri;
		cin>>stri;
		if(stri == "exit")
		{
			system("cls");
			exit(0);
		}
		else if(stri == "help")
		{
			help();
		}
		else if(stri == "lincense")
		{
			lincense();
		}
		else if(stri == "credits")
		{
			credits();
		}
		else if(stri == "copyright")
		{
			copyright();
		}
		else if(stri == "exit")
		{
			exit(0);
		}
		else if(stri == "clear")
		{
			clear();
		}
		else
		{
			cout<<"The command does not exist, please enter help to view help!\n";
		}
		
	}
}

#endif
