#include <iostream>
#include <string.h>
using namespace std;

struct PERSON {
	int age;
	char sex;
	float weight;
	char name[25];
};

int main() {
	struct PERSON one;
	struct PERSON *p;
	p = &one;
	p->age = 32;
	p->sex = 'M';
	p->weight = (float)80.2;
	strcpy(p->name, "LiMing");
	cout << "������" << (*p).name << endl;
	cout << "�Ա�" << (*p).sex << endl;
	cout << "���أ�" << (*p).weight << endl;
	cout << "���䣺" << (*p).age << endl;
	system("pause");
	return 0;
}