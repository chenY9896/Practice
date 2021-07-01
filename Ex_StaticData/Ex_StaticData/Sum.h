#pragma once
#include <iostream>
using namespace std;
class CSum
{
public:
	CSum(int a=0,int b=0) {
		nSum += a + b;
	}
	int getSum() {
		return nSum;
	}
	void setSum(int sum) {
		nSum = sum;
	}
	~CSum() {

	}
public:
	static int nSum;
};


int CSum::nSum = 0;