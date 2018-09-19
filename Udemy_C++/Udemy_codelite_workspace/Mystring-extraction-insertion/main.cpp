#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring larry{"Larry"};
    Mystring moe{"moe"};
    Mystring curly;
    
    cout <<"Enter the third stooges first name :";
    cin >> curly;
    
    cout << "The three stooges are " << larry << "," << moe << ", and " << curly << endl;
    
    cout << "\nEnter the three stooges names seperated by a space";
    cin >> larry >> moe >> curly;
    
    cout << "The three stooges are " << larry << " " << moe << ", and " <<curly <<endl;
    return 0;
}