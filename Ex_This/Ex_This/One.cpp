#include "One.h"
#include<iostream>
using namespace std;


COne::COne()
{
	x = y = 0;
}

COne::COne(int a, int b) {
	x = a;
	y = b;
}


COne::~COne()
{
}

void COne::copy(COne &a) {
	if (this == &a) return;
	*this = a;
}

void COne::print() {
	cout << x << "," << y << endl;
}
