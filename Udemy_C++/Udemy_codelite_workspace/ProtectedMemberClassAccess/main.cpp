#include <iostream>
using namespace std;

class Base {
public:
    int a{0};
    void display() { std::cout << a << "," << b << "," << c << endl; } //member methods has access to all

protected:
    int b{0};
    
private:
    int c{0};
};

class Derived:public Base {
    //a will be public
    //b will be protected
    //c its inherited but we dont have access 
public:
    void access_base_members() {
        a = 100; //OK
        b = 200; //OK
        //c = 300;  //Compiler error
    }
};

int main () {
    std::cout << "======Base member access from base objects ====" << endl;
    Base base;
    base.a = 100; //OK
    //base.b = 200;  //Compiler error
    //base.c = 300; //Error because its private
    base.display();
    base.display();
    std::cout << " ======Base member access from derived obects====" << endl;
    
    Derived d;
    d.a = 100;  //OK
   // d.b = 200;  //Compile Error its protected. 
    //d.c = 300;  //Compile Error
    return 0;
};
