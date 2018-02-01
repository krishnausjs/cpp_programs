#include <iostream>

#include <cstdio>  //needed for printf
#define print(fmt, args...) printf("%s(%s:%d) \n"fmt,  __func__,__FILE__, __LINE__, ##args)
#define println(fmt, args...) print(fmt"\n", ##args)

using namespace std;

class Room {
    int length;
    int width;
    static int count;
public:
    Room() {
        cout << "In contructor" << endl;
        length=12;
        width=9;
        count++;
    }
    Room(Room &r) {
        cout << "In Copy contructor" << endl;
        r.length=1;
        r.width=2;
        count--;
    }
    void display() {
        cout << "value of length " << length <<endl;
        cout << "value of width " << width <<endl;
        cout << "value of count " << count <<endl;
    }
};

int Room::count=0;

int main() {
    Room Room1;
    print("");
    Room1.display();
    print("");
    Room Room2(Room1);
    print("");
    Room2.display();
    print("");
    Room Room3 = Room1;
    print("");
    Room1.display();
    print("");
    Room2.display();
    print("");
    Room3.display();
    return 0;
}
