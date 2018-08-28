/*
Classes that contain class-type members are known as composite classes. When a class-type member of a composite class is created, the constructor is called before the class's own constructor. When a contained class lacks a default constructor, you must use an initialization list in the constructor of the composite class. In the earlier StorageBox example, if you change the type of the m_label member variable to a new Label class, you must call both the base class constructor and initialize the m_label variable in the StorageBox constructor:
*/
#include <iostream>
using namespace std;

class Label {  
public:  
    Label(const string& name, const string& address) { m_name = name; m_address = address; }  
    string m_name;  
    string m_address;  
};  

class Box {  
public:  
    Box(int width, int length, int height){  
       m_width = width;  
       m_length = length;  
       m_height = height;  
    }  
  
private:  
    int m_width;  
    int m_length;  
    int m_height;  
};    

class StorageBox : public Box {  
public:  
    StorageBox(int width, int length, int height, Label label)   
        : Box(width, length, height), m_label(label){}  
	void getLabelInfo()
	{
		cout <<"Lable name is " << m_label.m_name <<endl;
		cout <<"Lable address is " << m_label.m_address << endl;
	}
private:  
    Label m_label;  
};  
  
int main(){  
// passing a named Label  
    Label label1{ "some_name", "some_address" };  
    StorageBox sb1(1, 2, 3, label1);  
 	sb1.getLabelInfo(); 
    // passing a temporary label  
    StorageBox sb2(3, 4, 5, Label{ "another name", "another address" });  
 	sb2.getLabelInfo(); 
  
    // passing a temporary label as an initializer list  
    StorageBox sb3(1, 2, 3, {"myname", "myaddress"});  
 	sb3.getLabelInfo(); 
}  
