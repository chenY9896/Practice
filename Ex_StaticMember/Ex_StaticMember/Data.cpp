#include "Data.h"

CData::CData()
{
}

CData::~CData()
{
}

void CData::Print(void) {
	for (int i = 0; i < (pCur - data); i++)
		cout << data[i] << ",";
	cout << endl;
}
void CData::Sort(void) {
	int n = pCur - data;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (data[i] > data[j]) {
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
}

int main() {
	CData::Add(20);
	CData::Add(40);
	CData::Add(-50);
	CData::Add(7);
	CData::Add(13);
	CData::Print();
	CData::Sort();
	CData::Print();
	system("pause");
	return 0;
}