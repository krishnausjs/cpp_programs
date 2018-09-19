#include <iostream>
using namespace std;

Mystring::Mystring():str{NULL} {
    str = new char[1];
    str = '\0';    
}

Mystring::Mystring(const char *s):str{NULL} {
    if(s == NULL) {
        str = new char[1];
        str = '\0';
    } else {
        str =  new char[std::strlen(s)+1];
        strcpy(str,s);
    }
}

Mystring::Mystring(const Mystring &source) : str{NULL} {
    std::cout<<" Copy constructor used" << std::endl;
    if(source != NULL) {
        str = new char[strlen(source.str)+1];
        strcmp(str,source.str);
    }   
}

Mystring::Mystring(Mystring &&source):str{source.str} {
    source.str = NULL;
    std::cout<<" Move constructor used" << std::endl;
}

//Copy assignment
Mystring::~Mystring() {
    delete [] str;
}

