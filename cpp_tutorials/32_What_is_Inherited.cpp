#include <iostream>
using namespace std;

class Mother {
public:
	Mother() {
		cout << "Mother : No parameters" << endl;
	}
	Mother(int a) {
		cout << "Mother : int parameter " << a <<endl;
	}
};

class Daughter : public Mother {
public:
	Daughter(int a) : Mother(a)  {
		cout << "Daughter : int parameter" << a << endl;		
	}
};

class Son : public Mother {
public:
	Son(int a) : Mother()  {
		cout << "Son: int parameter" << a <<  endl;
	}
};

int main() {
	Daughter kelly(20);
	Son bud(30);
	return 0;
}
