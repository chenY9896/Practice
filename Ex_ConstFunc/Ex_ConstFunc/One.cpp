#include "One.h"
#include<iostream>
using namespace std;


COne::COne(int a,int b)
{
	x = a;
	y = b;
}


COne::~COne()
{
}

void COne::print() {
	cout << x << "," << y << endl;
}

void COne::print() const {
	cout << "ʹ�ó���Ա������" << x << "," << y << endl;
}
