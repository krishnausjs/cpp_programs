#include <iostream>
#include <cstring>
#include "Mystring.h"

Mystring::Mystring(const Mystring &source) 
	:str(NULL) {
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str, source.str);
}

//Destructor
Mystring::Mystring() {
	delete [] str;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
	std::cout << "Copy assignment" << std::endl;
	if(this == &rhs)
		return *this;

	delete [] this->str;

	str = new char[std::strlen(rhs.str)+1];
	std::strcpy(this->str, rhs.str);
	return *this;

}

//Display method
void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

//getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }
