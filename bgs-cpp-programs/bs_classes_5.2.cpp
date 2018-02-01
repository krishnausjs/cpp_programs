#include <iostream>

using namespace std;

class set {
    int m,n;
public:
    void display_set();
    void input_set();
    int find_largest();
};

inline void set::input_set() {
    cout << "Enter value of m and n" << endl;
    cin >> m >> n;
}

inline int set::find_largest() {
    if(m > n)
        return m;
    else
        return n;    
}

inline void set::display_set() {
    cout << "Value of the largest is " << find_largest() << endl;
}
int main() {
    set A;
    A.input_set();
    A.display_set();    
    return 0;
}
