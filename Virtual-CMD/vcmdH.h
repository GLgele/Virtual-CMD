#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
using namespace std;
#ifndef _VCMDH_H_
#define _VCMDH_H_

void help()
{
	cout << "��ģ��CMD��GLgele��д��ָ����Command.txt�\n";
}


void lincense()
{
	cout << "��鿴lincense�ļ���\n";
}

void credits()
{
	cout << "Dream Border X \n" << "GLgele \n";
}

void copyright()
{
	cout << "(c) 2020 DreamBorderX & GLgele����������Ȩ���� \n";
}

void clear()
{
	system("cls");
}
#endif 
