#include <iostream>
using namespace std;

class data {
    int x;
    int y;
    int z;
public:
    void getData();
    void display();
    void operator-();
};

void data::getData() {
    x=10;
    y=-20;
    z=30;
}

void data::display() {
    cout << "Value of data is " << endl;
    cout << x << " "<< y << " "<< z << endl;   
} 
void data::operator-() {
    x=-x;
    y=-y;
    z=-z;
}
int main() {
    data D;
    D.getData();
    D.display();
    -D; // activates operator - function
    D.display();
    return 0;
}
