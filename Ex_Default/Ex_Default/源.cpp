#include <iostream>
using namespace std;

void display(int a, int b = 2, int c = 3) {
	cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
}
int main() {
	display(1);
	display(1, 5);
	display(1, 7, 9);
	system("pause");
	return 0;
}