#pragma once
#include "Meter.h"
class CStick :
	public CMeter
{
	int m_nStickNum;
public:
	void DispStick();
	void SetStick(int nPos);

};

