#include <iostream>
using namespace std;

void func_a();
void func_b();
void func_c();
void func_d();

void func_a() {
    std::cout << "Starting func_a" << std::endl;
    func_b();
    std::cout <<" Finishing func_a" << std::endl; 
}

void func_b() {
    std::cout << "Starting func_b" << std::endl;
    try {
        func_c();
    }

    catch(int &ex) {
        std::cout << "Caught exception  in b!!!" << std::endl;
    }
    std::cout <<" Finishing func_b" << std::endl; 
}

void func_c() {
    std::cout << "Starting func_c" << std::endl;
    throw 0; // Say you introduce this here. Stack unwinding happens  from here.
    std::cout <<" Finishing func_c" << std::endl; 
}



int main()
{
    std::cout << "Starting main" << std::endl;
    try {
        func_a();
    }
    
    catch(int &ex) {
        std::cout << "Caught exception !!!" << std::endl;
    }
    std::cout <<" Finishing main" << std::endl;
    return 0;
} 