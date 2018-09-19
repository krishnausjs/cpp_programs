#include <iostream>
using namespace std;
int main()
{
    char middleInitial{'j'};
    cout << "My Middle initial is " << middleInitial << endl;
    
    unsigned short int examScore{55};
    cout << "Exam score is " << examScore << endl;
    
    int countriesRepresented{65};
    cout << "There were" << countriesRepresented << "countires reprsented in meeting" <<endl;
    
    long peopleInFlorida{20610000};
    cout << "There are about " << peopleInFlorida << " people in florida" << endl;
    
    long long peopleOnEarth(7600000000);
    cout << "There are about" << peopleOnEarth <<"people on earth"<<endl;
    
    float carPayment{4012};
    cout << "My car payment is " << carPayment <<endl;
    
    double pi{3.14159};
    cout << "Pi is " << pi << endl;
    
    long double largeAmount{2.7e120};
    cout << "large amount "<<largeAmount<<endl;
    
    short value1{30000};
    short value2{1000};
    int product{1000*30000};
    cout << "Product is " << product << endl;
    return 0;
}