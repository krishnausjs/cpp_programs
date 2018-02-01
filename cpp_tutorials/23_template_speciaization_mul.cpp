#include <iostream>
using namespace std;

template <class T>
class mycontainer {
	T element1;
	T element2;
public:
	mycontainer (T arg1,T arg2) : element1(arg1),element2(arg2) {}
	T multiplication() { return element1*element2; }
};

template<>
class mycontainer <float> {
	float element1,element2;
public:
	mycontainer(float arg1, float arg2) : element1(arg1), element2(arg2) {};
	float multiplication() {
		return (element1 * element2);
	}
};

int main() {
	mycontainer<int>myint(4,15);
	mycontainer<float>myfloat(4.5,15.1);
	cout << "Multiplication result is " << myfloat.multiplication() << endl;
	return 0;
}	
