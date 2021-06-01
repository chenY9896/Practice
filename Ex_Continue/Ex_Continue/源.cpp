#include <iostream>
using namespace std;
int main() {
	for (int nNum = 1; nNum <= 100; nNum++) {
		if (nNum % 7 == 0)
			continue;
		cout << nNum << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}