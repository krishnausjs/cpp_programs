#include <iostream>
using namespace std;

class CVector 
{
	public:
		int x,y;
		CVector() {}
		CVector(int a,int b) : x(a),y(b) {}
		CVector operator/(const CVector&);
};

CVector CVector::operator/(const CVector &param) 
{
	CVector temp;
	temp.x = x / param.x;
	temp.y = y / param.y;
	return temp;
}

int main()
{
	CVector x,y;
	CVector foo(3,4);	
	CVector bar(3,4);
	CVector result;
	result = foo / bar;
	cout << result.x << "," << result.y << endl;
	return 0;	
}
