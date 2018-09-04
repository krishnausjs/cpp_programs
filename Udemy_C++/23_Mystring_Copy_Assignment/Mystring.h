#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:	
	char *str;

public:
	Mystring();              //No-args constructor
	Mystring(const char *s); //Overloaded constructor
	Mystring(const Mystring &source); //Copy consturctor
	~Mystring();

	// Below left hand side is pointer to current object (this operator) | rhs is what we are assigning
	// Its not construction its an assignment
	Mystring &operator=(const Mystring &rhs); 

	void display() const;
	
	int get_length() const;			//getters
	const char *get_str() const;
};

#endif //_MYSTRING_H_
