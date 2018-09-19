//Miles per Gallon
#include <iostream>
using namespace std;

double calculate_mpg(int miles, int gallons) {
#if 1
    if(gallons == 0)
        throw 0;
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
    
    catch(int &ex) {
        std::cerr << "Tried to divide by zero" << std::endl;
    }
    std::cout << " Bye " << std::endl;   
    return 0;
}
