#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  char *c;
public:
  Mystring();
  Mystring(const char *s);
  Mystring(const Mystring &source) const;
  Mystring(Mystring &&source); 
  ~Mystring();
  Mystring &operator=(Mystring &rhs) const;
  void operator-() const;
};
#endif