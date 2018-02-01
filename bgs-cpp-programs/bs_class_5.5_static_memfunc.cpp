#include <iostream>

using namespace std;

class items {
    static int count;
public:
    void get_items() {
        cout << "Entered " << count << "time" << endl;
        count++;
    }

    void display_items() {
        cout << "Value of count is " << count << endl;
    }

    static int static_func() {
        cout << "In static member function   " << count << endl;
    }
};


int items::count;

int main() {
    items a,b,c;
    a.get_items();
    b.get_items();
    c.get_items();

    items::static_func();
    cout << "After ....." << endl;
    
    a.display_items();
    b.display_items();
    c.display_items();
    items::static_func();

    return 0;
}
