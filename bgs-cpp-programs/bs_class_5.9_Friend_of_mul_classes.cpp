#include <iostream>
using namespace std;

class ABC;
class XYZ {
    int i;
public:
    void setValue(int x) {
        i = x;
    }
    friend void maximum_value(XYZ,ABC);
};

class ABC {
     int i;
public:
    void setValue(int x) {
        i = x;
    }
    friend void maximum_value(XYZ,ABC);
};

void maximum_value(XYZ x,ABC a) {
    if(x.i > a.i) {
        cout << x.i;
    }
    else {
        cout << a.i;
    }
}

int main() {
    XYZ x;
    x.setValue(10);
    ABC a;
    a.setValue(20);
    maximum_value(x,a); 
    return 0;
}
