#include "Stick.h"
#include<iostream>
using namespace std;
void CStick::SetStick(int nPos) {
	SetPos(nPos);
}

void CStick::DispStick() {
	m_nStickNum = GetPos();
	cout << m_nStickNum << ' ';
}