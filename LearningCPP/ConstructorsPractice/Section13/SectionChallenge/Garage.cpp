#include "Garage.hpp"
#include "Car.hpp"
#include <iostream>
#include <string>

int Garage::num_cars{0};

Garage::Garage()
{
}

Garage::~Garage()
{
}

void Garage::display_all_cars(){
    for(int i=0; i < num_cars; i++){
        std::cout << cars.at(i).get_model() << " " << std::endl;
    }
}

bool Garage::search_car(std::string model){
    for(int i=0; i < num_cars; i++){
        std::string n = cars.at(i).get_model();
        if(n == model){
            return true;
        }
        
    }
    return false;
}

int Garage::get_num_cars(){
    return num_cars;
}

bool Garage::garage_full(){
    if(num_cars == 20){
        return true;
    }
    return false;
}

void Garage::track_Car(){
    
    int y;
    std::string n;
    int e{0};
    
    std::cout << "Enter year of car: ";
    std::cin >> y;
    
    std::cout << "Enter model of car: ";
    std::cin >> n;
    
    std::cout << "How many times has the car entered?: ";
    std::cin >> e;
    
    if(search_car(n)){
        std::cout << "That car is already in the garage." << std::endl;
    }
    else{
    
        Car new_car{y, n, e};
    
        cars.push_back(new_car);
    
        ++num_cars;
    
    }
}



