#include <iostream>
using namespace std;

class Room {
    int length;
    int width;
public:
    Room() {}
    Room(int l, int w):width(w),length(l) {
        
    }

};

int main() {
    Room objRoom1;
    Room objRoom2(10,32);
    return 0;
}
