#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};                  //Overloaded constructor
    a = Mystring{"Hola"};              //Overloaded constructor then move assignment
    a = "Bonjour";                         //Overloaded constructor then move assignment
    
    return 0;
}