#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str;
    
public:
    
    //Constructor
    MyString();
    //Overloaded constructor
    MyString(const char *s);
    //Copy constructor
    MyString(const MyString &source);
    //Move constructor
    MyString(MyString &&source);
    //Destructor
    ~MyString();
    
    //Overloaded assignment
    MyString &operator=(const MyString &rhs);
    //Move assignment
    MyString &operator=(MyString &rhs);
    
    //getters
    int get_length() const;
    void display() const;
    const char* get_str() const;

};

#endif // _MYSTRING_H_
