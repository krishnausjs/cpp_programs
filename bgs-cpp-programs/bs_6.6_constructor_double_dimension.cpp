#include <iostream>
using namespace std;

class Code {
    int **ptr;
    int d1,d2;
public:
    Code(int i,int j) {
        d1=i;
        d2=j;
        cout <<"Value of d1 and d2 are " <<d1 << "   " <<d2 << endl; 
        ptr = new int *[d1];
        for(j=0;j<d1;j++) {
           ptr[j] = new int[d2]; 
        }
    }
    void getItem(int i, int j, int value) {
        ptr[i][j] = value;
    }
    void putItem(int i, int j) {
        cout << "Value of item is " <<  ptr[i][j] << endl;
    }
};

int main() {
   int item;
   Code arr(2,2);
   int i,j;
   for(i = 0; i<2; i++) {
        for(j=0; j<2; j++) {
            cout <<"Enter the value" <<endl;
            cin >> item;
            arr.getItem(i,j,item);
        }
    }

   cout << "After reading array" << endl;
   for(i = 0; i<2; i++) {
        for(j=0; j<2; j++) {
            arr.putItem(i,j);
        }
    }
    return 0;
}
