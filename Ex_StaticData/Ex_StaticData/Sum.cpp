#include "Sum.h"
int main() {
	CSum one(10, 2), two;
	cout << "one:sum=" << one.getSum() << endl;
	cout << "two:sum=" << two.getSum() << endl;
	two.setSum(5);
	cout << "one:sum=" << one.getSum() << endl;
	cout << "two:sum=" << two.getSum() << endl;
	system("pause");
	return 0;
}