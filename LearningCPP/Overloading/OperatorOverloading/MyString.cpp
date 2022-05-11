#include "MyString.hpp"
#include <cstring>
#include <iostream>

//Defined no args Constructor
MyString::MyString()
    :str{nullptr}{
        str = new char[1];
        *str ='\0';
        std::cout << "No args constructor" << std::endl;
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
    std::cout << "Overloaded constructor" << std::endl;
    
}

//Copy constructor
MyString::MyString(const MyString &source)
    :str{nullptr}{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor" << std::endl;

    
}

//Move Constructor
MyString::MyString(MyString &&source)
    :str{source.str}{
    source.str = nullptr;
    std::cout << "Move constructor" << std::endl;

}

//Destructor
MyString::~MyString(){
    delete str;
    std::cout << "Destructor" << std::endl;
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

MyString &MyString::operator=(MyString &rhs){
    std::cout << "Move assign" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete this->str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
    
}

void MyString::display() const {
        std::cout << str << ": " << get_length() << std::endl;
}

int MyString::get_length() const{return std::strlen(str);}

const char* MyString::get_str() const{return str;}