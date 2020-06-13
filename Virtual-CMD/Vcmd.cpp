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
		cout<<"服务还未启动! \n";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout << "[控制台]正在启动...\n";
		wait(3);
		cout << "[控制台]正在读取数据...\n";
		wait(3);
		cout << "[控制台]正在注册注册表...\n";
		wait(3);
		system("msg * -time:3 注册成功 !");
		wait(3);
		cout << "[控制台]核心：" << ver << endl;
		cout << "[控制台]库：" << Ver << endl;
		cout << "[控制台]版本：" << version;
		cout << "[控制台]V-CMD已启动，以后可以通过faststart唤醒\n";
		start();
	}
}
