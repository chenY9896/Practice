#include "C.h"
#include<iostream>
using namespace std;


C::C(int a, int b, int d, int e, int m):B1(a,b),B2(d,e)
{
	z = m;
}


C::~C()
{
}

void C::print() {
	B1::print();
	B2::print();
	cout << "z=" << z << endl;
}
