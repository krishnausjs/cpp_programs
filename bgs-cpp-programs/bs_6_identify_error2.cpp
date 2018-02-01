#include <iostream>
using namespace std;

class Room {
    int length;
    int width;
public:
    Room() {
        length=0;
        width=0;
    }
#if 1
    Room(int value=8) {
        length =  width = value;
    }
#endif
    void display() {
        cout << "Value of length is " << length << "Value of width " << width << endl;
    }
};

int main() {
    Room objroom(0);
    objroom.display();
    return 0;
}
