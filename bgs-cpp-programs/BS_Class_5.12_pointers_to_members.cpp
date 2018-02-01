#include <iostream>

using namespace std;

class ptr_mem {
	int x, y;
public:
	void set_values(int m, int n) {
		x=m;
		y=n;
	}
	friend int sum_values(ptr_mem M);
};

int sum_values(ptr_mem M) {
	int ptr_mem::*px = &ptr_mem::x;
	int ptr_mem::*py = &ptr_mem::y;
	ptr_mem *n=&M;
	return ( n->*px + M.*py );
}

int main() {
	void (ptr_mem::*ptr_func)(int, int) = &ptr_mem::set_values;

	ptr_mem n;
	(n.*ptr_func)(110,200);

	cout << "Value of sum is " << sum_values(n) << endl;
	
	ptr_mem *M=&n;
	(M->*ptr_func)(10,300);
	cout << "Value of sum is " << sum_values(n) << endl;	

	return 0;
}
