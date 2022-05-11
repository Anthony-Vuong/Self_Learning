#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char input;
    int addNum{0};
    vector<int> nums;
    
    while(1){
        
        cout << endl << "P - Print Numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl << endl;
        
        cout << "Enter your choice: ";
        cin >> input;
        cout << endl;
        
        if(input == 'P' || input == 'p')
        {
            if(nums.size() == 0){
                cout << "[] - List is empty" << endl;
            }
            else{
                for(int i{0}; i < nums.size(); ++i){
                    cout << nums.at(i) << " ";
                }
                cout << endl << endl;
            }
        }
        else if(input == 'A' || input == 'a')
        { 
            cout << "Enter a number: ";
            cin >> addNum;
            nums.push_back(addNum);
        }
        else if(input == 'M' || input == 'm')
        { 
            if(nums.size() == 0){
                cout << "Can not compute mean" << endl;
            }
            else{
                double sum{0};
                double mean{0};
                for(int j{0}; j < nums.size(); ++j){
                    sum += nums.at(j);
                }
                
                mean = sum / nums.size(); 
                
                cout << "Mean: " << mean << endl;
            }
        }
        else if(input == 'S' || input == 's')
        { 
            int smallest{0};
            smallest = nums.at(0);
            for(int k{1}; k < nums.size(); ++k){
                if(nums.at(k) < smallest){
                    smallest = nums.at(k);
                }
            }
            cout << "Smallest: " << smallest << endl;
        }
        else if(input == 'L' || input == 'l')
        { 
            int largest{0};
            largest = nums.at(0);
            for(int k{1}; k < nums.size(); ++k){
                if(nums.at(k) > largest){
                    largest = nums.at(k);
                }
            }
            cout << "Largest: " << largest << endl;       
        }
        else if(input == 'Q' || input == 'q')
        { 
            break;
        }
        else{
            cout << "Choice not recognized, try again. " << endl;
        }
  
    }  
	return 0;
}
