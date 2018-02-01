#include <iostream>

using namespace std;

class items {
    static int count;
    int items[10];
public:
    void get_item() {
        cout << "Entered" << count << "times" << endl;
        count++;
    }
    
    void display_item() {
        cout << "Value of count is " << count << endl;
    }
};

int items::count;

int main() {
    items a,b,c;
    a.get_item();
    b.get_item();
    c.get_item();
    cout << "After ";
    a.display_item();
    b.display_item();
    c.display_item();
    return 0;
}

