#include <iostream>
using namespace std;

class Code {
    int x,y,z;
public:
    Code() {}

    Code(Code &c) {
        cout << "Constructor called " << endl;
        x = c.x;
        y = c.y;
        z = c.z;
    }

    Code(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    void display() {
        cout << "Value of x y z is " << x << "  " << y << "  " << z <<endl; 
    }
};

int main() {
    cout << " DGB-1" <<endl;
    Code a(100,200,300);
    cout << " DGB-2" <<endl;
    Code b_cost(a); 
    cout << " DGB-3" <<endl;
    Code C=a;
    cout << " DGB-4" <<endl;

    Code d=a;
    cout << " DGB-5" <<endl;
    //d = a;
    cout << " DGB-6" <<endl;
    
    Code e;
    cout << " DGB-7" <<endl;
    e = d;
   
    cout << " DGB-8" <<endl;
    a.display();
    d.display();
    b_cost.display();
    return 0;    
}
