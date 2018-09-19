#include <iostream>
using namespace std;
int main()
{
    cout << "Hello welcome to Muralis carpet cleaning service " << endl;
    cout << "\nHow many small rooms would you like cleaned ? " << endl;
    
    int small_rooms(0);
    cin >> small_rooms;
    
    cout << "\nHow many large rooms would you like cleaned ? " << endl;
    
    int large_rooms = 0;
    cin >> large_rooms;
    
    const double price_per_small_room(25);
    const double price_per_large_room(35);
    const double sales_tax(0.06);
    const int estimate_expiry(30);
    
    cout << "\nEstimate for carpet cleaning service " << endl;
    cout << "Number of rooms :" << price_per_small_room << endl;
    
    cout << "Price per small room : $" << price_per_small_room << endl;
    cout << "Price per large room : $" << price_per_large_room << endl;
    cout << "Cost $" 
         << (price_per_small_room*small_rooms)  + 
            (price_per_large_room*large_rooms) 
        << endl;
    cout << "Tax $" 
         << (price_per_small_room*small_rooms*sales_tax) +
            (price_per_large_room*large_rooms*sales_tax) 
         << endl;
    cout << "========================================" << endl;
    cout << "Total Estimate $" 
         << (price_per_small_room*small_rooms) + ( price_per_small_room*small_rooms*0.06)  +
            (price_per_large_room*large_rooms) + ( price_per_large_room*large_rooms*0.06)  
         << endl;
    cout <<"This estimate is valie for " << estimate_expiry << " days" << endl;
    return 0;
}