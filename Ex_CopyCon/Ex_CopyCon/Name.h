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
	CName(CName &one) {	//��ʽ��Ĭ�Ͽ������캯��
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

