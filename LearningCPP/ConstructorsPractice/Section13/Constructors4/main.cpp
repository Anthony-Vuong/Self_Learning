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
    
    /*Single constructor*/

    Player(std::string name_val ="None", int health_val=0, int xp_val=0);

  
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 args contsturctor" << endl;        
}

int main()
{
    Player empty;
    Player villain {"Villain"};
    Player hero {"Hero", 100};
	Player Tony {"Tony", 100, 24};
    
	return 0;
}
