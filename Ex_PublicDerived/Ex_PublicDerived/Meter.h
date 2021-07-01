#pragma once
class CMeter
{
public:
	CMeter(int nPos);
	~CMeter();
	void StepIt();
	int GetPos();
protected:
	void SetPos(int nPos);
private:
	int m_Pos;
};

