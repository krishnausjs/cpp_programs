#include <iostream>
using namespace std;

class CVector 
{
	int x;
	public:
		CVector () {};
		CVector (int a) : x(a) {}	
		int operator==(const CVector &);
};

int CVector::operator==(const CVector &param)
{
	if(x == param.x)
		return 1;
	else
		return 0;
}
int main()
{
	CVector foo(6);
	CVector bar(6);
	if ( foo == bar ) 
	{
		cout << "Both are equal" << endl;
	}
	else
	{
		cout << "Both are not equal" << endl;
	}
	return 0;
}
