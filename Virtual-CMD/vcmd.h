#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
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
		system("msg * ����ĺ������ã�ʹ���˴���Ĳ�����wait()");
		return;
	}
}

void start()
{
	system("cls");
	system("pause");
	system("cls");
	cout<<"DreamBorderX VirtualCMD [�汾 1.0.0]\n (c) 2020 DreamBorderX & GLgele����������Ȩ���� \n";
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
			cout<<"��ģ��CMD��GLgele��д��ָ����Command.txt�\n";
		}
		else if(stri == "lincense")
		{
			cout<<"��鿴lincense�ļ���\n";
		}
		else if(stri == "credits")
		{
			cout<<"Dream Border X \n"<<"GLgele \n";
		}
		else if(stri == "copyright")
		{
			cout<<"(c) 2020 DreamBorderX & GLgele����������Ȩ���� \n";
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
			cout<<"�����ڵ����������help�鿴������\n";
		}
		
	}
}

#endif
