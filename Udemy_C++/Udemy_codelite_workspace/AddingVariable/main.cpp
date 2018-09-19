#include <iostream>
using namespace std;
int main()
{
     cout <<" Enter the width of the room: " <<endl;
    int room_width{0};
    cin >> room_width;
    
    cout <<"Enter the lenght of the room: "<<endl;
    int room_length{0};
    cin >> room_length;
    
    cout << "The area of the room is  " << room_width * room_length <<" Square feet."<<endl; 
    return 0;
}