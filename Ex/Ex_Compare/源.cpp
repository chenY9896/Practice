#include <iostream>
using namespace std;
int main() {
	int nNum1, nNum2;
	cout << "Please input two integer number:";
	cin >> nNum1 >> nNum2;
	if (nNum1 != nNum2)
		if (nNum1 > nNum2)
			cout << nNum1 << ">" << nNum2<<endl;
		else
			cout << nNum1 << "<" << nNum2<<endl;
	else
		cout << nNum1 << "=" << nNum2<<endl;

	system("pause");
	return 0;
}