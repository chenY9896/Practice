#include <iostream>
using namespace std;
int main() {
	char *p1 = "ABCDEFGH", *p2 = p1;
	while (*p1 != '\0')
		p1++;
	while (p2 <= p1--)
		cout << *p1;
	cout << endl;

	system("pause");
	return 0;
}