#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include "vcmd.h"
using namespace std;
string stri = "";
const string ver = "vcmdH.h";
const string Ver = "vcmd.h";
const string version = "1.0.0";
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
		cout<<"Service is not started yet! \n";
	}
	if(temp == 1)
	{
		start();
	}
	else
	{
		system("cls");
		cout << "[Console] Starting...\n";
		wait(3);
		cout << "[Console] Reading data...\n";
		wait(3);
		cout << "[Console] Registering the registry...\n";
		wait(3);
		system("msg * -time:3 Registration succeeded!");
		wait(3);
		cout << "[Console]CORE£º" << ver << endl;
		cout << "[Console]LIBRARY£º" << Ver << endl;
		cout << "[Console]Version£º" << version;
		cout << "[Console]V-CMD has been started, you can wake up through \"faststart\" later \n";
		start();
	}
}
