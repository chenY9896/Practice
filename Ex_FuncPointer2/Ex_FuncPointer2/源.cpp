#include <iostream>
using namespace std;
double add(double x, double y) {
	return x + y;
}
double mul(double x, double y) {
	return x * y;
}
void op(double(*func)(double, double), double x, double y) {
	cout << "x=" << x << ",y=" << y << ",result=" << func(x, y) << endl;
}
int main() {
	cout << "ʹ�üӷ�������";
	op(add, 3, 7);
	cout << "ʹ�ó˷�������";
	op(mul, 3, 7);
	system("pause");
	return 0;
}