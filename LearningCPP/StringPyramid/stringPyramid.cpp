#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int len = input.size();
    
    for(int i = 0; i < input.size(); ++i){
        string space;

        for(int k{1}; k < len; ++k){
            space = space + " ";
        }
        len = len - 1;
        cout << space;
        
        int j{0};
        for(j = 0; j <= i; ++j){
            cout << input[j];
        }
        
        j--;
        
        while(j > 0){
            j--;
            cout << input[j];
        }
        cout << endl;
    }
    
	return 0;
}
