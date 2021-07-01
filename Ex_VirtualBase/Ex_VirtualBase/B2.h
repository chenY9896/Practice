#pragma once
#include "A.h"
class B2 :
	virtual public A
{
public:
	int y2;
	B2(int a, int b) ;
	~B2();
	void print(void);
};

