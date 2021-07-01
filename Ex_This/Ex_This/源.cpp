#include"One.h"
#include<iostream>

int main() {
	COne one, two(3, 4);
	one.print();
	one.copy(two);
	one.print();
	system("pause");
	return 0;
}