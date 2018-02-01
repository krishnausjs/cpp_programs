#include <iostream>

using namespace std;

class complex {
    float x,y;
public:
    void setValue(float real, float imag) {
        x=real;
        y=imag;
    }

    friend complex sum(complex&, complex&);

    void display() {
        cout << x << "+j" << y << endl;
    }
};

complex sum(complex &c1, complex &c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;       
    return c3;
}
int main() {
    complex c1,c2,c3;
    c1.setValue(3.14,7.12);
    c2.setValue(1.24,2.42);
    c3 = sum(c1,c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
