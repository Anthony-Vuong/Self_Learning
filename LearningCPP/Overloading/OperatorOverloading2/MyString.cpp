#include "MyString.hpp"
#include <cstring>
#include <iostream>

//Defined no args Constructor
MyString::MyString()
    :str{nullptr}{
        str = new char[1];
        *str ='\0';
}


//Overloaded constructor
MyString::MyString(const char *s)
    :str{nullptr}{
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    }else{
        
        std::strcpy(str, s);
    }
    
}

//Copy constructor
MyString::MyString(const MyString &source)
    :str{nullptr}{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//Destructor
MyString::~MyString(){
    delete str;
}

MyString &MyString::operator=(const MyString &rhs){
    std::cout << "Copy" << std::endl;
    
    if(this == &rhs){
        return *this;
    }
    delete [] this->str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    return *this;
}

void MyString::display() const {
        std::cout << str << ": " << get_length() << std::endl;
}

int MyString::get_length() const{return std::strlen(str);}

const char* MyString::get_str() const{return str;}