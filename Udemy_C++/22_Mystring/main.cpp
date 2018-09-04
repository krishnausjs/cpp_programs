#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
	Mystring empty;
	Mystring larry("Larry");  //Overloaded constructor
	Mystring stooge(larry); //Copy constructor call

	empty.display();
	larry.display();
	stooge.display();
	
	return 0;
}
