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

//Move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str) {
        source.str = NULL;                                                      //set null to source str
        std::cout<<" Move constructor used" << std::endl;
}

//Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
    std::cout << "Using copy assignment " << std::endl;
    
    if(this == &rhs)
        return *this;
        
    delete [] str;
    
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

//Move assignment 
Mystring &Mystring::operator=(Mystring &&rhs) {
    std::cout << "Using move assignment" << std::endl;
    
    //Check for self assignemnt
    if(this == &rhs)
        return *this;
    
    //Delete the str from current object
    delete [] str;
    
    //Steal its pointer
    str = rhs.str;
    
    //Nullify the right side pointer
    rhs.str = NULL;

    return *this;
}

bool Mystring::operator==(const Mystring &rhs) const {
        return (std::strcmp(str, rhs.str) == 0);   
}

//Make lower case
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff, str);
    for( size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//Concatenate
Mystring Mystring::operator+(const Mystring &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff,str);
    std::strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
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
