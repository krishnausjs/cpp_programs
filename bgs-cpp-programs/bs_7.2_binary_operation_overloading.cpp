#include <iostream>
#include <cstdio>
using namespace std;
#define println(fmt,args...) printf(" %s:%s:%d \n"fmt,__func__,__FILE__,__LINE__, ##args)
#define print(fmt,args...) printf(fmt"\n",##args)

class complex {
    float x;
    float y;
public:
    complex() {}
    complex(float real, float img) {
        x=real;
        y=img;
    }
    complex operator+(complex&);
    void display();
};

void complex::display() {
    cout << x << "+j" << y << endl;
}

complex complex::operator+(complex &C)
{
    complex temp;
    temp.x = x + C.x;
    temp.y = y + C.y;
    return temp;
}
int main() {
    complex C1,C2,C3;
    C1 = complex(2.3,4.4);
    C2 = complex(3.3,4.2);
    C3 = C1.operator+(C2);
    C1.display();   
    C2.display();
    C3.display();       
    return 0;
}
