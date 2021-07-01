#include "Meter.h"



CMeter::CMeter(int nPos=10)
{
	m_Pos = nPos;
}


CMeter::~CMeter()
{
}

void CMeter::StepIt() {
	m_Pos++;
}

int CMeter::GetPos() {
	return m_Pos;
}

void CMeter::SetPos(int nPos) {
	m_Pos = nPos;
}