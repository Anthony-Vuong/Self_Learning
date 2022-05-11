#ifndef _CAR_H_
#define _CAR_H_

#include <string>

class Car
{
    
private:

    std::string model;
    int year;
    int *entered;
    
public:

    std::string get_model()const{return model;}
    int get_year()const{return year;}
    int get_entered(){return *entered;}
    void set_entered(int entrances){*entered = entrances;}
    
    //Constructor
    Car(int year, std::string model, int entered);
    
    //Copy constructor
    Car(const Car &source);
    
    //Move constructor
    Car(Car &&source) noexcept;
    
    //Destructor
    ~Car();

};

#endif // _CAR_H_
