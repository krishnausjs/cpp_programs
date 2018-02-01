#include <iostream>
using namespace std;

class Rectangle {
		int width,height;
	public:
		Rectangle();	
		Rectangle(int a,int b);
		int area() {
			return width*height;
		}
};

Rectangle::Rectangle() {
	width=5;
	height=5;
}

Rectangle::Rectangle(int a, int b) {
	width=a;
	height=b;
}

int main() {
	Rectangle rect(3,4);
	Rectangle rectb;
	cout <<"Area of rect is "<< rect.area() << endl;
	cout <<"Area of rectb is "<< rectb.area() << endl;
	return 0;
}