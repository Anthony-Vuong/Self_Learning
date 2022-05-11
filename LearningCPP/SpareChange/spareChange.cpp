#include <iostream>

using namespace std;

int main()
{
    int cents{};
    
    const int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};
    
    int dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    cout << "Enter an amount in cents: " << endl;
    cin >> cents;
    
    dollars = ((cents - (cents % dollar)) / dollar);
    cents -= dollars * dollar;
    
    quarters = ((cents - (cents % quarter)) / quarter);
    cents -= quarters * quarter;

    dimes = ((cents - (cents % dime)) / dime);
    cents -= dimes * dime;

    nickels = ((cents - (cents % nickel)) / nickel);
    cents -= nickels * nickel;

    pennies = ((cents - (cents % penny)) / penny);

    cout << "Dollars : " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes:    " << dimes << endl;
    cout << "Nickels : " << nickels << endl;
    cout << "Pennies:  " << pennies << endl;
    
	return 0;
}
