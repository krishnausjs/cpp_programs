#include <iostream>
#include <cstdlib>

using namespace std;

class arrset {
    int items[30];
    int count;
public:
    void CNT() {
        count = 0;
    }
    void add_items();
    void remove_items();
    void display_items();
};

inline void arrset::display_items() {
    for(int i=0; i<count; i++) {
        cout << items[i] << endl;
    }
    cout << endl;
}
 
inline void arrset::add_items() {
    int index,item;
    cout << "Enter the index to add the items" << endl;
    cin >> index;
    cout << "Enter the value to add" << endl; 
    cin >> item;
    items[index] = item;
    count++;
}  

inline void arrset::remove_items() {
    int index;
    cout << "Enter the index of item to remove" << endl;    
    cin >> index;
    for (int i=0; i<count; i++) {
        if(i == index)
            items[i] = 0;
    }
}

int main() {
    arrset set;

    int choice;

    set.CNT();  
    set.display_items();
    
    do {
        cout << "Following operations can be performed choose one please " << endl;
        cout << "1.Adding an item" << endl;
        cout << "2.Removing an item" << endl;
        cout << "3.Displaying an item" << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                set.add_items();
                break;            
            case 2:
                set.remove_items();
                break;
            case 3:
                set.display_items();
                break;
            default:
                break;       
        }
    }while(choice <= 3);    
    return 0;
}
