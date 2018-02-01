#include <iostream>

using namespace std;

class sample {
    int a,b;
public:
    void getSamples(int x, int y) {
        a=x;
        b=y;
    }
    friend float calMean(sample s);
};

float calMean(sample s) {
    return ( float(s.a + s.b) / 2);
    
}
int main() {
    sample s;
    s.getSamples(20,25);
    cout << "Mean is " << calMean(s) << endl;   
    return 0;
}
