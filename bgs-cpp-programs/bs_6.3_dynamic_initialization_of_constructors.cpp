#include <iostream>

using namespace std;

class Fixed_deposit {
    long PValue;
    int years;
    float rate;
    float RValue;
public:
    Fixed_deposit() {}
    Fixed_deposit(long p, int y, double r=0.12);
    Fixed_deposit(long p, int y, int r);
    void display();
     
};
     
Fixed_deposit::Fixed_deposit(long p, int y, double r) {
    PValue = p;
    years = y;
    rate = r;
    RValue = PValue;
    cout << "I am in 1" <<endl;
    for(int i = 0; i < y; i++) {
        RValue = RValue *  (1+r);
    }
}

Fixed_deposit::Fixed_deposit(long p, int y, int r) {
    PValue = p;
    years = y;
    rate = r;
    RValue = PValue;
    cout << "I am in 2" << endl;
    for(int i = 0; i < y; i++) {
        RValue = RValue *  (1+ float(r)/100);
    }
}

void Fixed_deposit::display() {
    cout << "Value of RValue is " << RValue << endl; 
}

int main() {
    Fixed_deposit f1,f2,f3;
    
    f1=Fixed_deposit(10000,3,18);
    f2=Fixed_deposit(10000,3,0.18);
    f3=Fixed_deposit(10000,3);
    
    f1.display();
    f2.display();
    f3.display();
    return 0;
}
