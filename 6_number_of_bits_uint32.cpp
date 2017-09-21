#include <iostream>
using namespace std;

int main() {
	const int nibble_bits[]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
	unsigned int num=0x8;
	int count=0;
	while(num) {
		 cout << "Value of num is " << num << endl;
		 count += nibble_bits[num&0xf];
		 num>>=4;
	}
	cout << "Value of count is " << count << endl;
	return 0;
}
