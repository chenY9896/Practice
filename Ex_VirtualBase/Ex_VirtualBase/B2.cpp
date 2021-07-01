#include "B2.h"
#include<iostream>
using namespace std;


B2::B2(int a=0,int b=0):A(b)
{
	y2 = a;
}


B2::~B2()
{
}

void B2::print(void) {
	cout << "B2:x=" << x << ",y2=" << y2 << endl;
}