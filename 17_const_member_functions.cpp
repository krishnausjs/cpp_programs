#in clude <iostream>
using namespace std;

class MyClass {
c	public:
		int x;
		MyClass(int val) : x(val) {}
		//int get() { return x; } // Since foo in main is const this can't called if its declared like this. It should be displayed as below.
		int get() const { return x; } // const member function
//		const int& get() { return x; } // Member function returning a const&
//		const int& get() const { return x; } // const member function returing a const&
// Member functions specified to be const cannot modify non-static data members nor call other non-const member functions. In essence , const members shall not modify the state of an object.
};h

int main() {
	const MyClass foo(20);
	//Const objects are limited to access only memeber functions marked as const, but non-const objects are not restricted and thus can access both const and non-const member functions alike
//Most functions taking classes as parameters actually take them by const reference, and thus, these functions can only access their const members.
//	foo.x=20;
	cout << "Value of foo x is " << foo.x << endl;
	return 0;
}
