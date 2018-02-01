#include <iostream>
using namespace std;

class Polygon {
protected:
	int width,height;
public:
	void set_values(int a, int b) {
		width=a;
		height=b;
	}
	virtual int area() {
		return 0;
	}
};

class Rectangle : public Polygon {
public:
	int area() {
		return width*height;
	}
};

class Triangle : public Polygon {
public:
	int area() {
		return width*height/2;
	}
};

int main() {
	Rectangle rect;
	Triangle trg1;
	Polygon poly;
	Polygon *ppoly1 = &rect;
	Polygon *ppoly2 = &trg1;
	Polygon *ppoly3 = &poly;
	Rectangle *rect1=&rect;

	ppoly1->set_values(4,5);
	ppoly2->set_values(4,5);
	ppoly3->set_values(4,5);
	cout << ppoly1->area() << endl;
	rect1->set_values(3,4);
	cout << ppoly2->area() << endl;
	cout << ppoly3->area() << endl;
	cout << rect1->area() << endl;
	return 0;
}
