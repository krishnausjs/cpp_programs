#include <iostream>

using namespace std;

class complex {
    float x,y;
public:

    complex() {
        x=y=0;
    }

    complex(int a) {
        x=y=a;
    }

    complex(float a,float b) {
        x=a;
        y=b;
    }

    complex(complex &ref)
    {
        x=ref.x;
        y=ref.y;
    }


    complex sum_complex(complex &a, complex &b);

    void show() {
        cout << "Value of x and y are " << x << "+j" << y <<endl;
    }

};

complex sum_complex(complex &a, complex &b) {
    complex c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

int main() {
    complex c;
    c.show();
    complex c1(12);
    c1.show();
    complex a(10,0),b(40.10,50.10),d;
    d=sum_complex(a,b);
    d.show(); 
    complex e(4.2,5.2);
    e.show();
    return 0;
}
