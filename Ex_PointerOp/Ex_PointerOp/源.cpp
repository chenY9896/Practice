#include <iostream>
using namespace std;
int main() {
	char a[] = "Chinese";
	char *p1 = a, *p2 = a, temp;
	while (*p2 != '\0')
		p2++;
	p2--;
	while (p1 < p2) {
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
		p1++;
		p2--;
	}
	cout << a << endl;
	system("pause");
	return 0;
}