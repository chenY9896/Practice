#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

class Rect
{
	friend void Point::Inflate(Rect &rc, int nOffset);
public:
	Rect(int x1=0,int y1=0,int x2=0,int y2=0) {
		xLeft = x1;
		xRight = x2;
		yTop = y1;
		yBottom = y2;
	}
	~Rect() {

	}
	void Print() {
		cout << "Rect(" << xLeft << "," << yTop << "," << xRight << "," << yBottom << ")" << endl;
	}

private:
	int xLeft, yTop, xRight, yBottom;
};

