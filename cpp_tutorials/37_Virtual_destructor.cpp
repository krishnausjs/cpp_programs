//http://www.geeksforgeeks.org/virtual-destructor/
// A program with virtual destructor
#include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
  cout << "This is before" << endl;
  //derived *d = new derived();  
  base *b = d;
  cout << "This is after" << endl;
  //delete b;
  return 0;
}
