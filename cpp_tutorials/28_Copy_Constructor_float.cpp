#include <iostream>
#include <string>
using namespace std;

class Example5 { 
	float *f;
public:
	Example5(const int& x) : f(new float(x)) {}
	~Example5() { delete f; }
	Example5(const Example5& e) : f(new float(e.content())) {};
	const float& content() const { return *f; }
};

int main() {
	Example5 foo(19.3);
	Example5 bar = foo;
	cout << " Value of bar content is " << bar.content() << endl;
	return 0;
}

