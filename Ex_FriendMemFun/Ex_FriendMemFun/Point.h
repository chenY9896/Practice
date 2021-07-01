#pragma once
#include<iostream>
#include"Rect.h"
using namespace std;
class Point
{
public:
	Point(int x=0,int y=0) {
		xPos = x;
		yPos = y;
	}
	~Point() {

	}

	void Inflate(Rect &rc, int nOffset);

	void Print() {
		cout << "Point(" << xPos << "," << yPos << endl;
	}
private:
	int xPos, yPos;
};

