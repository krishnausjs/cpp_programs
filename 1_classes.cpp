#include <iostream> 
using namespace std;

class Rectange {
		int width,height;
	public:
		void set_values(int,int);
		int area() {
			return width*height;
		}
};

void Rectange::set_values(int x, int y) {
	width=x;
	height=y;	
}

int main() {
	Rectange rect;
	Rectange rectb;
	rect.set_values(3,4);
	rectb.set_values(4,12);
	cout <<"Area is : "<<rect.area();
	cout <<"Area of b is : "<<rectb.area();
	return 0;
}
