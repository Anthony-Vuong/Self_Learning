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
    MyString(char *s);
    //Copy constructor
    MyString(const MyString &source);
    //Destructor
    ~MyString();
    
    //getters
    int get_length() const;
    void display() const;
    const char* get_str() const;

};

#endif // _MYSTRING_H_
