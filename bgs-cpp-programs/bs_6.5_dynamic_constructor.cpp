#include <iostream>
#include <cstring>

using namespace std;

class String{
    char *name;
    int length;
public:
    String() {
        length = 0;
        name = new char[length+1];
    }
    String(char *str) {
        length = strlen(str);
        name = new char[length+1];
        strcpy(name,str);
    }
    void join(String&, String&);
    void display() {
        cout << name << endl;
    }
};

void String::join(String &name1, String &name2) {
    length = name1.length + name2.length;
    cout << "Value of name is " << name << endl;
    //delete name;
    name = new char[length+1];
    strcpy(name,name1.name);
    strcat(name,name2.name);
}
int main() {
    char *pname="Murali";
    String name1(pname),name2("Krishna"),s;
    name1.display();
    name2.display();
    s.join(name1,name2);
    s.display();
    return 0;    
}
