#include "Name.h"
#include<iostream>
#include<string.h>
using namespace std;

CName::CName()
{
	strName = NULL;
}
CName::CName(char *str)
{
	strName = (char*)new char[strlen(str) + 1];
	strcpy(strName, str);
}

CName::~CName()
{
	if (strName)delete[]strName;
	strName = NULL;
}

int main() {
	//char *p = new char[5];
	//strcpy(p, "DING");
	CName one("DING");
	//delete[]p;
	cout << one.getname() << endl;
	system("pause");
	return 0;
}