#include <iostream>
#include <string>
using namespace std;

void change(char str[20]) {
	strcpy(str, "Chen");
}

int main() {
	char name[10] = "Ding";
	cout << name << endl;
	change(name);
	cout << name << endl;
	system("pause");
	return 0;
}
