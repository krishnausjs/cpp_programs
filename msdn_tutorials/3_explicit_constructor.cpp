#include <iostream>
using namespace std;

class Box {  
public:  
#if 0
    Box(int width, int length, int height)   
        : m_width(width), m_length(length), m_height(height) // member init list  
    {}
#else
	//Declaring explicit should cause error - MMK_TEL
	//error: no matching function for call to ‘ShippingOrder::ShippingOrder(int, double)
	explicit Box(int size): m_width(size), m_length(size), m_height(size){} 
#endif  
    int Volume() {return m_width * m_length * m_height; }  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
  
};  

class ShippingOrder  
{  
public:  
    ShippingOrder(Box b, double postage) : m_box(b), m_postage(postage)
	{}  
  
private:  
    Box m_box;  
    double m_postage;  
};  

int main()
{
    ShippingOrder so(42, 10.8);  
	return 0;
}
