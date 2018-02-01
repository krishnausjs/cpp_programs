#include <iostream>
#include <ostream>
using namespace std;

#define println(fmt,args...) printf("%s:%s:%d\n"fmt,__FILE__,__FUNCTION__,__LINE__,##args)
#define print(fmt,args...) print("%s:%s:%d\n"fmt,__FILE__,__FUNCTION__,__LINE__,##args)

int size=3;

class vector {
    int v[3];
public:
    vector() { //constructor -1 . Null vector
        for(int i=0; i<size; i++)
            v[i]=0;
    }
    vector(int *x) { //Constructor - 2 L constructs vector from array
        int i;
        for(i=0;i<size;i++)
            v[i]=x[i];
    }
    friend vector operator*(int a, vector b); //friend 1
    friend vector operator*(vector a, int b);     //friend 2
    friend istream & operator >> (istream &,vector &);   
    friend ostream & operator << (ostream &,vector &);
};

vector operator*(int a, vector b) {
    vector c;
    for(int i=0;i<size;i++)
        c.v[i]= a * b.v[i];
    return c;
}

vector operator*(vector a,int b) {
    vector c;
    for(int i=0;i<size;i++)
        c.v[i]=b*a.v[i];
    return c;
}

istream & operator >> (istream &din, vector& a) {
    for(int i=0;i<size;i++)
        din >> a.v[i];
    return(din);
}

ostream & operator << (ostream &dout, vector &b) {
    dout << "(" << b.v[0];
    for(int i=1; i<size; i++)
        dout << "," << b.v[i];
    dout << ")";
    return(dout);
}

int x[3] = {10,20,30};

int main() {
    vector a;  // invokes constructor 1
    vector b = x; //invokes constructor 2
    
    cout << "Enter the value of new vector " << endl; 
    cin >> a;

   // vector p,q;
    //p=2*a;
    //q=b*2;
    vector p = 2 * a;
    vector q = b * 2;
    
    cout << "p=" << p << endl;
    cout << "q=" << q << endl;

    return 0;   
}


