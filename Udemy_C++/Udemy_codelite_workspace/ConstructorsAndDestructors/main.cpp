#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
    Base() : value {0} { cout << "Base no arg constructor called" << endl; }
    Base(int x) : value {x} { cout << " Base int overloaded constructor called" << endl; }
    ~Base() { cout << "Base destructor" << endl; }
};

class Derived: public Base {
private:    
    int doubled_value;
public:
    Derived(): doubled_value{0} { std::cout << "Dereived no-args constructor is called" << endl; }
    Derived(int x) : doubled_value{x*2} { cout << "Derived int overloaded destructor called" << endl;}
    //~Derived() { std::cout << "Derived Destructor called" << endl; }
};

int main()
{
    //Base b;
    //Base b(100);
    //Derived d;
    Derived d{1000};
    return 0;
}