#include <iostream>

using namespace std;

class item {
    int number;
    float cost;
public:
    void getdata(int number, float cost);
    void putdata() {
        cout << " Value of number is " << number << endl;
        cout << "value of cost is " << cost << endl;
    }
};

void item::getdata(int num, float c)
{
    number = num;
    cost = c;
}

int main()
{
    item A;
    A.getdata(10,21.12);
    A.putdata();
    return 0;      
}
