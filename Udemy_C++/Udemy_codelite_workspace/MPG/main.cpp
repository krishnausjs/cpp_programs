//Miles per Gallon
#include <iostream>
using namespace std;

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon{};
    
    std::cout << "Enter the miles" << std::endl;
    std::cin >> miles;
    std::cout << "Enter the gallons " << std::endl;
    std::cin >> gallons;
#if 0
    miles_per_gallon = miles / gallons;
    miles_per_gallon = static_cast <double> (miles) / gallons;
    if( gallons != 0) {
         miles_per_gallon = static_cast <double> (miles) / gallons;
        std::cout << "Result " << miles_per_gallon <<std::endl;
    }
    else {
           std::cerr << "Result " << "Divide by Zerooooo !!!" << std::endl;
     }
#else
   try  {
       if(gallons == 0)
            throw 0;
       miles_per_gallon = static_cast <double> (miles) / gallons;
       std::cout << "Result " << miles_per_gallon <<std::endl;
    }
    catch (int &ex) {
        std::cerr << "Result " << "Divide by Zerooooo !!!" << std::endl;
    }
#endif
    std::cout << " Bye " << std::endl;   
    return 0;
}
