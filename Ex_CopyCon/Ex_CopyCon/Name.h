#pragma once
#include<iostream>
#include<string>
using namespace std;
class CName
{
public:
	CName() {
		strName = "";
	}
	CName(string str) {
		strName = str;
	}
	CName(CName &one) {	//显式的默认拷贝构造函数
		strName = one.strName;
	}
	CName(CName &one, string add) {
		strName = one.strName;
		strName += add;
	}
	~CName() {
		strName = "";
	}
	string getName() {
		return strName;
	}
private:
	string strName;
};

