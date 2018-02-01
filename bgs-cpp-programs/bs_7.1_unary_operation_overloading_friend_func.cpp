#include <iostream>
#include <cstdio>

using namespace std;

#define print(fmt, args...) printf("%s:%s:%d\n"fmt,__func__,__FILE__,__LINE__,##args)
#define println(fmt, args...) printf(fmt"\n", ##args)

class Data {
    int x;
    int y;
    int z;
public:
    void getData();
    void display();
    friend void operator-(Data&);
};

void Data::getData() {
    x=20;
    y=-20;
    z=-40;
}

void Data::display() {
    cout <<"value of x y z are " << x << " " << y << " " << z << endl;
}

void operator-(Data &s) {
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
}

int main () {
   Data D;
   D.getData();
   D.display();
   -D;
   D.display(); 
   return 0;  
}
