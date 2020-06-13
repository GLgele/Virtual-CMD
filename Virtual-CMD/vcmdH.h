#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
using namespace std;
#ifndef _VCMDH_H_
#define _VCMDH_H_

void help()
{
	cout << "The simulated CMD is written by GLgele. Command in Command.txt Inside.\n";
}


void lincense()
{
	cout << "Please check the lincense file.\n";
}

void credits()
{
	cout << "Dream Border X \n" << "GLgele \n";
}

void copyright()
{
	cout << "(c) 2020 DreamBorderX & GLgele.All rights reserved. \n";
}

void clear()
{
	system("cls");
}
#endif 
