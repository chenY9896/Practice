#include"One.h"
#include<iostream>

int main() {
	COne one(5, 4);
	one.print();
	const COne two(20, 52);
	two.print();
	system("pause");
	return 0;
}