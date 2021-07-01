#pragma once
class CName
{
public:
	CName();
	CName::CName(char *str);

	char *getname() {
		return strName;
	}
	~CName();
private:
	char *strName;
};

