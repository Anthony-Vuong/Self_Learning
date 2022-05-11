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
    
    /*Overloaded constructors*/
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health_val, int xp_val);

 
    /* Initializing constructor - more more efficient way */
    Player()
    : Player{"None", 0, 0}{
            cout << "No args contsturctor" << endl;
    }

    Player(std::string name_val)
    : Player{name_val, 0, 0}{
            cout << "1 arg contsturctor" << endl;    
    }

    Player(std::string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 args contsturctor" << endl;        
    }
  
};

int main()
{
    Player empty;
    Player villain {"Villain"};
	Player Tony {"Tony", 100, 24};
    
	return 0;
}
