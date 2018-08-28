#include <iostream>
#include <vector>
//vector::data : Returns a pointer to the first element in the vector.
//A pointer to the first element in the vector or to the location succeeding an empty vector
int main()
{
	using namespace std;

	vector<int> c1;
	vector<int>::pointer c1_Ptr;
	vector<int>::const_pointer c1_cPtr;

	c1.push_back(1);
	c1.push_back(2);
	c1.push_back(3);
	c1.push_back(4);
	c1.push_back(5);
	
	cout << "The vector c1 contains elements:";
	c1_cPtr = c1.data();

	//for(size_t n = c1.size(); 0 < n; --n, c1_cPtr++)
	for(size_t n = 0; n < c1.size(); n++, c1_cPtr++)
		cout <<" " << *c1_cPtr;

	cout << endl;

	cout << "The vector c1 now contains element.";
	*c1_Ptr=20;

	for(size_t n = c1.size(); 0 < n; --n, c1_Ptr++)
		cout <<" " << *c1_Ptr;

	cout <<endl;
}
