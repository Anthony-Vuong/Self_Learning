#include <iostream>
#include <vector>
#include "MyString.hpp"



int main()
{
	MyString a {"Hello"};
    MyString b;
    
    b=a;
    
    b = "This is a test";
    
	return 0;
}
