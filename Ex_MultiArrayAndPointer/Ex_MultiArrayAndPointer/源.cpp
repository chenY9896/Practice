#include <iostream>
using namespace std;
int main() {
	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int y = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			y += (*(a + i))[j];				//(*(a+i))[j]==a[i][j]
	cout << y << endl;
	system("pause");
	return 0;
}