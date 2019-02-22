//Miles per Gallon
#include <iostream>
#include <string>

using namespace std;

//Below are User defined exception classes.
class DivideByZeroException {
    
};

class NetgativeValueException {
    
};

double calculate_mpg(int miles, int gallons) {
#if 1
    if(gallons == 0)
        throw DivideByZeroException();
        
    if(gallons < 0 || miles < 0)
        throw NetgativeValueException();
#endif
    return static_cast<double>(miles)/gallons;
}
int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon{};
    
    std::cout << "Enter the miles" << std::endl;
    std::cin >> miles;
    std::cout << "Enter the gallons " << std::endl;
    std::cin >> gallons;

    try {
        miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << "Result " << miles_per_gallon << std::endl;
    }
    
    catch(const DivideByZeroException &ex) {
        std::cerr << "Sorry, you cant divide by zero" << std::endl;
    }
    
    catch(const NetgativeValueException &ex) {
        std::cerr << "Sorry, one of your parameters is negative" << std::endl;
    }
    std::cout << "Bye " << std::endl;   
    return 0;
}
