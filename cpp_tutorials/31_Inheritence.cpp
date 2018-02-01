#include <iostream>
using namespace std;

class Polygon {
protected:
	int width,height;
public:
	void set_values(int a, int b)
	{
		width=a;
		height=b;
	}
};

class Rectangle: public Polygon {
public:
	int area() {
		return width*height;
	}
};

class Triangle: public Polygon {
public:
	int area() {
		return width*height/2;
	}
};

int main() {
	Rectangle rect;
	Triangle tri;
	rect.set_values(4,5);
	tri.set_values(4,5);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
