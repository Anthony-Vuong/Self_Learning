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
 
    std::string get_name() const{
        return name;
    }
    
    /*Overloaded constructors*/
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

};

/* Initializing constructor - more more efficient way */
Player::Player()
: Player{"None", 0, 0}{
}

Player::Player(std::string name_val)
: Player{name_val, 0, 0}{
}

Player::Player(std::string name_val, int health_val, int xp_val)
: name{name_val}, health{health_val}, xp{xp_val}{
}

void display_name(const Player &p){
    cout << p.get_name() << endl;
}
  

int main()
{
    const Player Tony {"Tony", 100, 24};

    Player villain {"Villain"};
    
    display_name(Tony);
    
    
    
	
    
	return 0;
}
