#include <iostream>
using namespace std;

class constructor_sample {
    int x,y;
public:
    constructor_sample(int m,int n); // Constructor should be declared under public only.
    void display() {
        cout << "value of x and y is " << x <<  "    " << y << endl;
    }    
};

constructor_sample::constructor_sample(int m, int n) {
    x=m;
    y=n;
}
int main()
{
    constructor_sample c1(10,23);
    c1.display();
    constructor_sample c2(21,34);
    c2.display();
    return 0;
}
