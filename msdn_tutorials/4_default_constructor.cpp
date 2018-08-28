#include <iostream>
using namespace std;

class Box {  
public:
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height){}  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
  
};  
  
int main(){  
  
    Box box1(1, 2, 3);  
  //  Box box2{ 2, 3, 4 };  
 //   Box box4;     // compiler error C2512: no appropriate default constructor available  
   Box boxes[3]{ { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
}  
  
