#pragma once
#include"A.h"
#include "B1.h"
#include"B2.h"
class C :
	public B1,public B2
{
public:
	int z;
	C(int a,int b,int d,int e,int m);
	~C();
	void print();
};

