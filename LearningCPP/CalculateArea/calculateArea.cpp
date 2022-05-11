#include <iostream>

using namespace std;

int main(){
    
    int area, length, width = 0;
    
    cout << "Enter room width: ";
    cin >> width;
    
    cout << "Enter room length: ";
    cin >> length;
    
    area = length * width;
    
    cout << area << " is the area of the room." << endl;
    
    return 0;
}
