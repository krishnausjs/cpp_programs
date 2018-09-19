#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>

using namespace std;

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator >> (std::istream &in, Mystring &rhs);
    
private:
    char *str; // pointer to char[] that holds a cstyle string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();
    
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    void display() const;
    
    int get_length() const;
    const char *get_str() const;
};

#endif //_MYSTRING_H_