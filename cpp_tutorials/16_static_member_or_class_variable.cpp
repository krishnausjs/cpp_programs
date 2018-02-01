#include <iostream>
using namespace std;

class Dummy {
	public:
		/*Static members have same properties as non-member variables
		  but they enjoy class scope */
		/* Its common variable for all classes */
		static int n;
		Dummy () { n++; };
};

//This can be done only if n is static member or class variable
/* Since static has class scope, instead of declaring several times
   they cannot be initialized directly in the class, but need to
   initialized somewhere outside as below */
int Dummy::n=0;

int main() {
	Dummy a;
	Dummy b[5];
	
	cout << "Number of objects created = " << a.n << endl;
	Dummy *c = new Dummy;
	cout << "Printing using global class name = " << Dummy::n << endl;	
	cout << "Value of new object is = " << c->n << endl;
	delete c;
	return 0;
 }
