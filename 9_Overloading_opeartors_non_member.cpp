#include <iostream>
using namespace std;

class CVector {
	public:
		int x,y;
		CVector() {}
		CVector(int a, int b) : x(a),y(b) {}	
};

CVector operator+(const CVector &lhs, const CVector &rhs) {
	CVector result;	
	result.x = lhs.x + rhs.x;
	result.y = lhs.y + rhs.y;
	return result;
}
int main() {
	CVector foo(67,23);
	CVector bar(90,12);
	CVector result;
	result = foo + bar;
	cout << result.x << "," << result.y << endl;
	return 0;
}
