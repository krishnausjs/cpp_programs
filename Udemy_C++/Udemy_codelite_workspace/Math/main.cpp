#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int number;
    cout << "Enter a number between 1 and 100" << endl;
    cin >> number;
    if( number == 9)
        cout << "Hey my favourite number is  " << number << endl;
    else    
        cout << number << " is not my favourite number"  << endl;
    return 0;
}