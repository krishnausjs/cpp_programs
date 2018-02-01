#include <iostream>
using namespace std;

class timeset {
    int hours;
    int minutes;
public:
    void getTime(int h,int m) {
        hours = h;
        minutes = m;
    }  
    void sumTime(timeset t1, timeset t2) {
        minutes = t1.minutes + t2.minutes;    
        hours = minutes/60;
        minutes = minutes%60;
        cout << "Value of minutes is " << minutes << endl;
        hours = hours + t1.hours + t2.hours;
    }
    void putTime() {
        cout << hours << ":" << minutes << endl;
    }
};

int main() {
    timeset T1, T2, T3;
    
    T1.getTime(2,64);
    T2.getTime(3,64);
    
    T3.sumTime(T1,T2);
    T3.putTime();
    return 0;
}
