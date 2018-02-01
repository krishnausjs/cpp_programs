#include <iostream>
using namespace std;

class CVector 
{
	public:
		int x,y;
		CVector () {}
		CVector (int a,int b) : x(a),y(b) { }
		CVector operator*(const CVector& param);
};

CVector CVector::operator*(const CVector &param) 
{
	CVector result;
	result.x = x * param.x;
	result.y = y * param.y;
	return result;
}
int main() 
{
	CVector foo(5,6);
	CVector bar(3,4);
	CVector result;
	result = foo * bar;
	cout << result.x << "," << result.y << endl;
	return 0;
}
