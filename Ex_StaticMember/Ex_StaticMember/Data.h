#pragma once
#include<iostream>
using namespace std;
class CData
{
public:
	CData();
	~CData();
	static void Add(int a) {
		if (pCur >= data + 20)
			cout << "内存空间不足，无法添加！" << endl;
		else {
			*pCur = a;
			pCur++;
		}
	}
	static void Print(void);
	static void Sort(void);

private:
	static int data[20];
	static int *pCur;
};

int CData::data[20];
int *CData::pCur = data;
