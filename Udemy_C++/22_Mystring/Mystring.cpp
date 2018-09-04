#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()
	:str(NULL) {
	str = new char[1];
	*str = '\0';
}

//Overloaded constructor
Mystring::Mystring(const char *s)
	:str(NULL) {
	if(str == NULL) {
		if(s == NULL) {
			str = new char[1];
			*str = '\0';
		} else {
			str = new char[std::strlen(s)+1];
			std::strcpy(str,s);
		}
	}
}

//Copy constructor
Mystring::Mystring(const Mystring &source)
	:str(NULL) {
	str = new char[std::strlen(source.str)+1];
	std::strcpy(str, source.str);
}


//Destructor
Mystring::~Mystring() {
	delete [] str;
}

//Display Method
void Mystring::display() const {
	std::cout << str << ":" << get_length() << std::endl;
}

//length getter
int Mystring::get_length() const { return std::strlen(str); }

//string getter
const char *Mystring::get_str() const { return str; }
