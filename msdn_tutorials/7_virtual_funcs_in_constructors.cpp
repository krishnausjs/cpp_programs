/*
We recommend that you be careful when you call virtual functions in constructors. Because the base class constructor is always invoked before the derived class constructor, the function that's called in the base constructor is the base class version, not the derived class version. In the following example, constructing a DerivedClass causes the BaseClass implementation of print_it() to execute before the DerivedClass constructor causes the DerivedClass implementation of print_it() to execute:

*/
#define MMK_DEF 1
#include <iostream>  
using namespace std;  
  
class BaseClass{  
public:  
#ifdef MMK_DEF
    BaseClass(){  
        print_it();  
    }
#else
	virtual BaseClass() = 0;
#endif
#ifdef MMK_DEF
    virtual void print_it() {  
        cout << "BaseClass print_it" << endl;  
    }
#else
    virtual void print_it()=0; 
#endif
  
};  
  
class DerivedClass : public BaseClass {  
public:  
    DerivedClass() {  
        print_it();  
    } 
#ifdef MMK_DEF
    virtual void print_it(){  
        cout << "Derived Class print_it" << endl;  
    }
#endif  
};  
  
int main() {  
  
    DerivedClass dc;  
}  
