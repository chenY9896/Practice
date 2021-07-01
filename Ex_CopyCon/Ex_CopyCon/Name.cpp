#include "Name.h"

int main() {
	CName o1("Chen");
	CName o2(o1);
	cout << o2.getName() << endl;
	CName o3(o1, " Ying");
	cout << o3.getName() << endl;
	system("pause");
	return 0;
}
