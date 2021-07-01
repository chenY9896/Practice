#include"Meter.h"
#include"Stick.h"
#include<iostream>
using namespace std;

int main() {
	CMeter oMeter(20);
	CStick oStick;
	cout << "CMeter:" << oMeter.GetPos() << ",CStick:" << oStick.GetPos() << endl;
	oMeter.StepIt();
	cout << "CMeter:" << oMeter.GetPos() << ",CStick:" << oStick.GetPos() << endl;
	oStick.StepIt();
	cout << "CMeter:" << oMeter.GetPos() << ",CStick:" << oStick.GetPos() << endl;
	oStick.DispStick();
	oStick.StepIt();
	oStick.DispStick();

	system("pause");
	return 0;
}