#include <iostream>

using namespace std;

int main()
{
    
    int big_rooms {0}, small_rooms {0}; 
    const double big_room_price {35.0}; // const - will always be this value
    const double small_room_price {25.0}; 
    const double tax_rate {0.06};
    const int quote_expiration {30};
    
    cout << "Enter number of big rooms: ";
    cin >> big_rooms;
    
    cout << "Enter number of small rooms: ";
    cin >> small_rooms;
    
    cout << "You want " << big_rooms << " big rooms." << endl;
    cout << "And you want " << small_rooms << " small rooms." << endl;

    cout << "Price per big room is " << big_room_price << "." << endl;
    cout << "Price per small room is " << small_room_price << "." << endl;
    cout << "The tax rate is " << tax_rate << "." << endl;
    
    double big_room_total = (big_room_price * big_rooms);
    double small_room_total = (small_room_price * small_rooms);
    double quote_total = (big_room_total + small_room_total) + ((big_room_total + small_room_total)* tax_rate);
    cout << "For your quote we will charge " << quote_total << "." << endl;
 	cout << "And you have " << quote_expiration << " before this quote expires." << endl;
    return 0;
}
