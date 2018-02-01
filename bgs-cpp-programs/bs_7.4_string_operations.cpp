#include <iostream>
#include <string.h>
using namespace std;
#define printl(args,fmt...) printf("%s:%d"fmt,__FUNCTION__,__LINE__,##args)

class String {
    char *p;
    int len;
public:
    String() {
        len=0;
        p=0;
    }
    String(const char *s);
    String(const String &t);
    void show() {
        cout << p << endl;
    }
    friend String operator + (const String &s1,const String &s2);
    friend int operator <= (const String &s1, const String &s2);
};

String::String(const char *s) {
        len=strlen(s);
        p = new char[len+1];
        strcpy(p,s);
}

String::String(const String &t) {
        len=t.len;
        p = new char[len+1];
        strcpy(p,t.p);
}

String operator + (const String &s1, const String &s2) {
    String temp;
    temp.len = s1.len + s2.len; 
    temp.p= new char[temp.len+1];
    strcpy(temp.p,s1.p);
    strcat(temp.p,s2.p);
    return temp;
}

int operator <= (const String &s1, const String &s2) {
    int m = s1.len;
    int n = s2.len;
    if(m<n)
        return 1;
    else
        return 0;
}
int main() {
    String s1 = "prathyaksha";
    String s2 = "Marimekala";
    String t1,t2,t3;
    t1=s1;
    t1.show();
    t2=s2;
    t2.show();
    t3=s1+s2;
    t3.show();
    if(t1 <= t3)
    {
        t1.show();
        cout << "Is smaller than ";
        t3.show();
    }
    else
    {
        t1.show();
        cout << "Is larger than ";
        t3.show();
    }
    return 0;
}
