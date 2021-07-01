#include"C.h"
#include<iostream>
int main() {
	C c1(100, 200, 300, 400, 500);
	c1.print();
	c1.x = 400;
	c1.print();
	system("pause");
	return 0;
}