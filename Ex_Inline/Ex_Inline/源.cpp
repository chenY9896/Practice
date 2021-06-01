#include <iostream>
using namespace std;

inline float max(float x, float y) {
	return x > y ? x : y;
}

int main() {
	float a;
	a = max(5, 10);
	cout << "最大的数为：" << a << endl;
	system("pause");
	return 0;
}