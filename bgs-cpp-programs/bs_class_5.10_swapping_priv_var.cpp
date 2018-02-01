#include <iostream>
using namespace std;

class class_2;
class class_1 {
    int i;
public:
    void inputData(int x) {
        i=x;
    }
    void display() {
        cout << "Value of i is " << i;
    }
    friend void swap_func(class_1 &,class_2 &);
};

class class_2 {
    int j;
public:
    void inputData(int x) {
        j=x;
    }
    void display() {
        cout << "Value of i is " << j;
    }

    friend void swap_func(class_1 &,class_2 &);
};

void swap_func(class_1 &x, class_2 &y) {
    int temp;
    temp = x.i;
    x.i = y.j;
    y.j = temp;
}

int main() {
    class_1 c1;
    class_2 c2;

    c1.inputData(10);
    c2.inputData(20);

    c1.display();
    c2.display();

    swap_func(c1,c2);

    cout << "After swapping" << endl;
    c1.display();
    c2.display();
    return 0;
}
