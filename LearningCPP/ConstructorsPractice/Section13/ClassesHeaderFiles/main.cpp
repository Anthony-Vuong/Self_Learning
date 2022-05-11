#include <iostream>

using namespace std;
#include "Account.hpp"

int main()
{
	Account bob_account;
    
    bob_account.set_name("Bob");
    bob_account.set_balance(500.00);
    
    if(bob_account.deposit(100.0)){
        cout << "Ok" << endl;
    }
    else{
        cout << "Nok" << endl;
    }
    
    if(bob_account.withdraw(500.0)){
        cout << "Withdraw Ok" << endl;

    }else{
        cout << "Withdraw NOk" << endl;
    }
    
    if(bob_account.withdraw(1500.0)){
        cout << "Withdraw Ok" << endl;

    }else{
        cout << "Withdraw NOk" << endl;
    }
    
   
	return 0;
}






