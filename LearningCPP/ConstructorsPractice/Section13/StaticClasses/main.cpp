#include <iostream>
#include "Player.hpp"
#include <string>
using namespace std;


void display_active_players(){
    cout << "Active: " << Player::get_num_players() << endl;
}

int main()
{
    
    Player Tony{"Tony", 100, 50};
    Player Peter{"Peter", 100, 30};
    Player Kyle{"Kyle", 100, 40};
    
    display_active_players();
    
    
	return 0;
}
