#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	cout << "�������ĳ������ǣ�" << argv[0] << endl;
	if (argc <= 1)
		cout << "û�в�����";
	else {
		int nCount = 1;
		while (nCount < argc) {
			cout << "��" << nCount << "�������ǣ�" << argv[nCount] << endl;
			nCount++;
		}
	}
	system("pause");
	return 0;
}