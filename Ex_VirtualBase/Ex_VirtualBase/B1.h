#pragma once
#include "A.h"
class B1 :
	virtual public A
{
public:
	int y1;
	B1(int a,int b);
	~B1();
	void print(void);
};

