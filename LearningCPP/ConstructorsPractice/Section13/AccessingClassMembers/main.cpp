#include <iostream>
#include <string>
#include <vector>

class Player{
public:
    //attributes
    std::string name{"Player"};
    int health{100};
    int xp{3};
    
    //methods
    void talk(std::string text){std::cout << name << " says " << text << std::endl;}
    bool isDead();
  
};

class Account{
public:
    std::string name;
    double balance;
    
    void deposit(double bal){balance += bal;}
    void withdraw(double bal){balance -= bal;}
};


int main()
{
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;
    
    frank_account.deposit(500.0);
    frank_account.withdraw(200.0);
    
    std::cout << "Balance is: " << frank_account.balance << std::endl;
    
    Player frank;
    
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    
    frank.talk("Yo");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    
    
    delete enemy;
    
	return 0;
}
