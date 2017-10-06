#include <iostream>
using namespace std;

class MyClass {
	int x;
	public:
		static int y;
		MyClass(int val): x(val) {}
		//int get() const { return x; }
		const int& get() const { return x; }
		int get_static() const { return y; }
//		int get() { return x; }
};

int MyClass::y=20;
void print(const MyClass& arg) {
	cout << "Value is " << arg.get() << endl;
	cout << "Static value is " << arg.get_static() << endl;
}

int main() {
	const MyClass foo(10);
	print(foo);
	return 0;
}
