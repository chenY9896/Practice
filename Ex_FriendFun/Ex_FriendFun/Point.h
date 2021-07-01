#pragma once
#include<iostream>
using namespace std;
class Point
{
	friend Point Inflate(Point &pt, int nOffset);
public:
	Point(int x = 0, int y = 0) {
		xPos = x;
		yPos = y;
	}
	void Print() {
		cout << "Point(" << xPos << "," << yPos << ")" << endl;
	}
	~Point() {

	}

private:
	int xPos, yPos;
};

