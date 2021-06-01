#include <iostream>
using namespace std;

long factorial(int n) {
	long result = 0;
	if (0 == n)
		result = 1;
	else
		result = n*factorial(n - 1);
	return result;
}

int main() {
	cout << factorial(4) << endl;
	system("pause");
	return 0;
}
