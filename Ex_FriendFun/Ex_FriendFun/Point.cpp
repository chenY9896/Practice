#include "Point.h"

Point Inflate(Point &pt, int nOffset) {
	pt.xPos += nOffset;
	pt.yPos += nOffset;
	return pt;
}
int main() {
	Point pt(10, 20);
	pt.Print();
	Inflate(pt, 3);
	pt.Print();
	system("pause");
	return 0;
}