#include <iostream>
#include <string>
using namespace std;

class Example5 {
	int *t;
public:
	Example5(const int& x) : t(new int(x)) {}
	~Example5() { delete t; }
	//Example5(const Example5& x) : t(new int(x.content())) {}
	Example5(const Example5& x) { t = new int(x.content()); }
	const int& content() const { return *t; }
};

int main() {
	Example5 foo(10);
	Example5 bar=foo;
	cout << "bars int content is " << bar.content() << endl;
	return 0;
}
