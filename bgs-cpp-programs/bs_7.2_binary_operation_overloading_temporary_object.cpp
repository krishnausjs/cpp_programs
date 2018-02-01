#include <iostream>
#include <cstdio>

using namespace std;
#define println(fmt,args...)  printf("%s:%s:%d: \n"fmt,__FILE__,__FUNCTION__,__LINE__,##args)
#define print(fmt,args...) printf("%s:%d"fmt,__FUNCTION__,__LINE__,##args)

class complex {
    float real,img;
public:
    complex() {};
    complex(float r,float i) {
        real=r;
        img=i;
    }
    complex operator+(complex b) {
        return (complex((real+b.real),(img+b.img)));
    }
    void display() {
        cout << real << "+j" << img << endl;
    }
};

int main() {
    complex c1,c2,c3;
    c1 = complex(2.3,4.2);
    c2 = complex(3.2,4.5);
    c3 = c1.operator+(c2);
    c3.display();
    return 0;
}
