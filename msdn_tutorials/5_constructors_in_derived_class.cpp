#include <iostream>
using namespace std;


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
    StorageBox(int width, int length, int height, const string label) : Box(width, length, height){  
        m_label = label;  
    }  
	void getLabel() {
		cout <<"Label is : " <<m_label<<endl;
	}
private:  
    string m_label;  
};  
  
int main(){  
  
    const string aLabel = "aLabel";  
    StorageBox sb(1, 2, 3, aLabel);  
	sb.getLabel();
}   

