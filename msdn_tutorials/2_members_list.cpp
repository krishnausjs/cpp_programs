#include <iostream>
using namespace std;

class Box {  
public:  
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height) // member init list  
    {}  
    int Volume() {return m_width * m_length * m_height; }  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
}; 

int main()
{
	Box b(10,20,30);
	cout << "The volume is " << b.Volume();  
	return 0;
} 
