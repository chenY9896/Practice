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
	cout << "姓名：" << (*p).name << endl;
	cout << "性别：" << (*p).sex << endl;
	cout << "体重：" << (*p).weight << endl;
	cout << "年龄：" << (*p).age << endl;
	system("pause");
	return 0;
}