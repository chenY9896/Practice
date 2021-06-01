#include <iostream>
using namespace std;

void swap(float x, float y) {
	float temp;
	temp = x;
	x = y;
	y = temp;
	cout << "x=" << x << ",y=" << y << endl;
}

int main() {
	float a = 20, b = 40;
	cout << "a=" << a << ",b=" << b << endl;
	swap(a, b);
	cout << "a=" << a << ",b=" << b << endl;

	system("pause");
	return 0;
}