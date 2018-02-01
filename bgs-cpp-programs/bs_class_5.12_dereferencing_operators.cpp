#include <iostream>
using namespace std;

class MainClass {
    int x,y;
public:
    void sum_xy(int a,int b)
    {
        x=a;
        y=b;
    }
    friend int sum(MainClass M);
    void display_xy()
    {
        cout << "Value of x is " << x << endl;
        cout << "Value of y is " << y << endl;
    }
};

int sum(MainClass M)
{
    int MainClass::*px=&MainClass::x;
    int MainClass::*py=&MainClass::y;
    MainClass *pm=&M;
    int S = M.*px + pm->*py;
    return S;
}

int main()
{
    MainClass T;
    void (MainClass::*pf) (int,int) = &MainClass::sum_xy;
    (T.*pf) (10,20);
    T.display_xy(); 
    cout << "Sume is " << sum(T) << endl;
    return 0;
}
