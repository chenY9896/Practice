#include "B1.h"
#include<iostream>
using namespace std;


B1::B1(int a=0,int b=0):A(b)
{
	y1 = a;
}


B1::~B1()
{
}

void B1::print(void) {
	cout << "B1:x=" << x << ",y1=" << y1 << endl;
}
