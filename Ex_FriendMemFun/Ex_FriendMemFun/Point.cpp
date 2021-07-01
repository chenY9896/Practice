#include "Point.h"
#include "Rect.h"

void Point::Inflate(Rect &rc, int nOffset) {
	xPos += nOffset;
	yPos += nOffset;
	rc.xLeft += nOffset;
	rc.xRight += nOffset;
	rc.yTop += nOffset;
	rc.yBottom += nOffset;
}

int main() {
	Point pt(10, 20);
	Rect rc(0, 0, 100, 80);
	pt.Print();
	rc.Print();
	pt.Inflate(rc, 3);
	pt.Print();
	rc.Print();
	system("pause");
	return 0;
}
