#include <iostream>
#include <string>
#include <vector>

class Player{
    //attributes
    std::string name{"Player"};
    int health{100};
    int xp{3};
    
    //methods
    void talk(std::string);
    bool isDead();
  
};

class Account{
    std::string name;
    double balance;
    
    bool deposit(double);
    bool withdraw(double);
};


int main()
{
    Account jim_account;
    Account frank_account;
    
	Player frank;
    Player hero;
    
    Player player[]{frank, hero};
    
    std::vector<Player> player_vec{frank};
    player_vec.push_back(hero);
    
    Player* enemy{nullptr};
    enemy = new Player;
    
    delete enemy;
    
    
	return 0;
}
