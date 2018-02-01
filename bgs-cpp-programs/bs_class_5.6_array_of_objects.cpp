#include <iostream>
using namespace std;

class employee {
    char name[20];
    int employeeID;
public:
    void getData();
    void putData(); 
};

void employee::getData() {
    cout << "Enter employee name" << endl;
    cin >> name;
    cout << "Enter Employee id " << endl;
    cin >> employeeID;
}


void employee::putData() {
    cout << "Employee name is " << name << "Id is " << employeeID << endl;
}

int main() {
    employee managers[3];
    
    int i;
    for(i=0;i<3;i++) {
        managers[i].getData();
    }
       
    cout << "Displaying data" << endl;
    
    for(i=0;i<3;i++) {
        managers[i].putData();
    }

    return 0;
}
