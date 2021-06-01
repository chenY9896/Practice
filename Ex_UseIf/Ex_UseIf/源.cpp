#include <iostream>
using namespace std;
#define A -1
int main() {
#if A>0
	cout << "a>0" << endl;
#elif A<0
	cout << "a<0" << endl;
#else
	cout << "a=0"<<endl;
#endif
	system("pause");
	return 0;
}