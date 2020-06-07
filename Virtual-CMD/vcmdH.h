#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
using namespace std;
#ifndef _VCMDH_H_
#define _VCMDH_H_

void help()
{
	cout << "该模拟CMD由GLgele编写。指令在Command.txt里。\n";
}


void lincense()
{
	cout << "请查看lincense文件。\n";
}

void credits()
{
	cout << "Dream Border X \n" << "GLgele \n";
}

void copyright()
{
	cout << "(c) 2020 DreamBorderX & GLgele。保留所有权利。 \n";
}

void clear()
{
	system("cls");
}
#endif 
