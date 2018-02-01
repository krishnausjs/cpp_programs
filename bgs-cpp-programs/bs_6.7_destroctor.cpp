#include <iostream>
using namespace std;
int count=0;
class alpha {
public:
    alpha() {
        count++;
        cout << "Number of constructors created" << count << endl;
    }
    ~alpha() {
        count--;
        cout << "Number of constructors destroyed" << count << endl;
    }
};

int main() {
    alpha a1,a2,a3,a4;
    {
        cout <<"Entered block1" << endl;
        alpha a5;
    }
    alpha a6,a7;
    {
        cout <<"Entered block2" << endl;
        alpha a8;
    }   
    return 0;
}
