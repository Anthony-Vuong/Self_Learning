#ifndef _GARAGE_H_
#define _GARAGE_H_

#include <vector>
#include "Car.hpp"

class Garage
{
private:
    static int num_cars;
    std::vector<Car> cars;
    
public:

    static int get_num_cars();
    void track_Car();
    bool garage_full();
    void display_all_cars();
    bool search_car(std::string model);

    //Constructor
    Garage();
    
    //Destructor
    ~Garage();

};

#endif // _GARAGE_H_
