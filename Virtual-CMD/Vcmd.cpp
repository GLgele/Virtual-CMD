#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include "vcmd.h"
using namespace std;
string stri = "";
const string ver = "vcmdH.h";
const string Ver = "vcmd.h";
const string version = "1.0.0"
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
		cout<<"����δ����! \n";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout << "[����̨]��������...\n";
		wait(3);
		cout << "[����̨]���ڶ�ȡ����...\n";
		wait(3);
		cout << "[����̨]����ע��ע���...\n";
		wait(3);
		system("msg * -time:3 ע��ɹ� !");
		wait(3);
		cout << "[����̨]���ģ�" << ver << endl;
		cout << "[����̨]�⣺" << Ver << endl;
		cout << "[����̨]�汾��" << version;
		cout << "[����̨]V-CMD���������Ժ����ͨ��faststart����\n";
		start();
	}
}
