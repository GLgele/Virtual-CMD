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
		cout<<"����δ����!";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout<<"[����̨]��������...\n";
		wait(3);
 	    cout<<"[����̨]���ڶ�ȡ����...\n";
		wait(3);
		cout<<"[����̨]����ע��ע���...\n";
		wait(3);
		system("msg * -time:3 ע��ɹ� !");
		wait(3);
		cout<<"[����̨]V-CMD���������Ժ����ͨ��faststart����\n";
		start();
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
		cout<<"Vcmd>";
		cin>>stri;
		if(stri == "exit")
		{
			exit(0);
		}
		else if(stri == "help")
		{
			cout<<"��ģ��CMD��GLgele��д��ָ����Command.txt�";
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
		system("msg * ����ĺ������ã�ʹ���˴���Ĳ�����wait()");
	}
}