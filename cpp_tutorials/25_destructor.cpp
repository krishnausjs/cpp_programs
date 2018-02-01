#include <iostream>
#include <string>
using namespace std;

class Example4 {
	string* ptr;
public: 
	//Constructor
	Example4() : ptr(new string) {}
	Example4 (const string& str) : ptr(new string(str)) {}
	//Destructor
	~Example4() { 
		cout << "Releasing memory " << endl;
		delete ptr; 
	}
	//access content	
	const string& content() const { 
		return *ptr; 
	}
};

int main() {
	Example4 foo;
	Example4 bar ("Example");
	cout << "bars content: " << bar.content() << endl;
	return 0;
}	
