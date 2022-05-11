#include "Car.hpp"
#include <string>

//Constructor
Car::Car(int year_val, std::string model_val, int entered_val)
    :year{year_val}, model{model_val}{
    entered = new int;
    *entered = entered_val;
        
}

//Copy Constructor
Car::Car(const Car &source)
    :Car{source.year, source.model, *source.entered}{}
    
//Move Constructor
Car::Car(Car &&source) noexcept
    :year{source.year}, model{source.model}, entered{source.entered}{
    source.entered = nullptr;
    
}

//Destructor
Car::~Car()
{
    delete entered;
}

