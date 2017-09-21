#include <iostream>
using namespace std;

class Rectangle {
		int width,height;
	public:
		Rectangle(int,int);
		int area() {
			return width*height;
		}
};

Rectangle::Rectangle(int a,int b) {
	width = a;
	height = b;	
}

int main() {
	Rectangle rect(3,4);
	Rectangle rectb(5,4);
	cout << "Area of rect is "<< rect.area() <<endl;
	cout << "Area of rectb is " << rectb.area() << endl;
	return 0;
}
