#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	cout << "这个程序的程序名是：" << argv[0] << endl;
	if (argc <= 1)
		cout << "没有参数！";
	else {
		int nCount = 1;
		while (nCount < argc) {
			cout << "第" << nCount << "个参数是：" << argv[nCount] << endl;
			nCount++;
		}
	}
	system("pause");
	return 0;
}