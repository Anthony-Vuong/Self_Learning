#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    string message;
    string key = {"BADSTACZEBRAGALAPAGOSKILAMANJAROWHISKEYDUKEVICIOUSSEMALFLLLIUQ"};
    string cipherd;
    string deciphered;
    string temp;
    vector<int> keyIndex;
    
    cout << "Enter your message: ";
    getline(cin, message);
    
    for(int i{0}; i < message.size(); ++i){
        temp = key.substr(i, 2);
        cipherd = cipherd + temp;
    }
    
    cout << cipherd << endl;
    
    int i{0};
    for(int j{0}; j < cipherd.size(); j+=2){
        temp = message.substr(i, 1);
        deciphered = deciphered + temp;
        i++;
    }
    
    cout << deciphered << endl;
    
	return 0;
}
