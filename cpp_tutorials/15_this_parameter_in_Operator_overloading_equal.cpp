#include <iostream>
using namespace std;

class CVector {
	public:
		int x,y;
		CVector () {}
		CVector (int a, int b) : x(a),y(b) {}
		CVector operator=(const CVector &);	
};

CVector CVector::operator=(const CVector &param) {
	x = param.x;
	y = param.y;
	return *this;
}
int main() {
	CVector foo(3,4);
	CVector result;
	result = foo;
	cout << result.x << "," << result.y << endl;
	return 0;
}
