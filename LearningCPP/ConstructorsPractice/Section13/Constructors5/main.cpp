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
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    
    /*Single constructor*/

    Player(std::string name_val ="None", int health_val=0, int xp_val=0);
    
    /* Copy Constructor */
    Player(const Player &source);
    
    /*Destructor*/
    ~Player(){cout << "Destructor" << endl;}
  
};

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 args contsturctor" << endl;        
}

// Copy constructor initialization
//Player::Player(const Player &source)
//    : name{source.name}, health{source.health}, xp{source.xp}{
//        cout << "Copy contsturctor" << endl;        
//}

//Copy constructor delegating
Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}{
       cout << "Copy contsturctor" << endl;        
}

void display_player(Player p){
        cout << p.get_name() << endl;
        cout << p.get_health() << endl;
        cout << p.get_xp() << endl;

}

int main()
{
    Player empty{"xxx", 100, 50};
    
    Player new_obj{empty};
    
    display_player(empty);
    
    Player villain {"Villain"};
    Player hero {"Hero", 100};
	Player Tony {"Tony", 100, 24};
    
	return 0;
}
