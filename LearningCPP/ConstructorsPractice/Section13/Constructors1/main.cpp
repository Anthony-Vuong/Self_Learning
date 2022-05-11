#include <iostream>

using namespace std;
#include <string>

class Player{

private:
    std::string name;
    int health;
    int xp;

public:  
    void set_name(std::string name_val){
        name = name_val;
    }
 
    std::string get_name(){
        return name;
    }
 
    /* Initializing constructors */
    Player(){
        name = "None";
        health = 100;
        xp = 3;
    }

    Player(std::string name_val){
        name = name_val;
        health = 0;
        xp = 0;
    }

    Player(std::string name_val, int health_val, int xp_val){
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
  
};

int main()
{
    Player empty;
    Player villain {"Villain"};
	Player Tony {"Tony", 100, 24};
    
	return 0;
}
