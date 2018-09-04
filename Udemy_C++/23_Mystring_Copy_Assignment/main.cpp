#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
	Mystring a{"Hello"};	//Overloaded constructor
	Mystring b;				//No args constructor
	b = a; 					//copy assignment

	b = "This is a test";	//b.operator=("This is a test");

	/*
	Mystring empty;
	Mystring larry("Larry");
	Mystring stooge(larry);	
	Mystring stooges;
	
	empty = stooge;
	
	empty.display();
	larry.display();
	stooge.display();
	empty.display();
	
	stooges = "Larry, Moe and Curly";
	
	*/

}
