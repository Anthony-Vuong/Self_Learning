#include <iostream>
#include "Car.hpp"
#include "Garage.hpp"

int main()
{
	Garage g;
    
    while(g.get_num_cars() < 3){
        g.track_Car();
    }
    
    g.display_all_cars();
    
    
	return 0;
}
