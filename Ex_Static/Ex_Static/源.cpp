#include <iostream>
using namespace std;

void count() {
	int i = 0;
	static int j = 0;
	i++;
	j++;
	cout << "i=" << i << ",j=" << j << endl;
}

int main() {
	count();
	count();
	system("pause");
	return 0;
}