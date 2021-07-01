#pragma once
class COne
{
public:
	COne();
	COne(int a, int b);
	~COne();

	void copy(COne &a);
	void print();
private:
	int x, y;
};

