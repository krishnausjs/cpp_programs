#include <iostream>
using namespace std;

class CVector {
	public:
		int x,y;
		CVector () {} 
		CVector (int a, int b) : x(a),y(b) {};
		CVector operator-(const CVector&);
};

CVector CVector::operator- (const CVector& param) 
{
	CVector temp;
	temp.x = x - param.x;
	temp.y = y - param.y;
	return temp;
}


int main() 
{
	CVector foo(13,14);
	CVector bar(4,5);
	CVector result;
	result = foo.operator-(bar);
	cout << result.x << "," << result.y <<endl;
	return 0;
}
