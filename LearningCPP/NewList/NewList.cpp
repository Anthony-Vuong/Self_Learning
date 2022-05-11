#include <iostream>
#include <vector>

using namespace std;

//Function Prototypes
void runProgram();
void promptUser(char &input);
void addToList(vector<int> &nums);
void calculateMean(vector<int> &nums);
void calculateMeanHelper(vector<int> &nums, double &mean);
void smallestNumber(vector<int> &nums);
void largestNumber(vector<int> &nums);
void removeAtIndex(vector<int> &nums, int idx);
void removeDuplicates(vector<int> &nums, int val);
void removeNumber(vector<int> &nums);
int runOptions(char &input, vector<int> &nums);


int main()
{
	runProgram();
	return 0;
}

//Function - prints valid input options and prompts user for input
void promptUser(char &input){
    cout << endl << "P - Print Numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "R - Remove a number" << endl;
    cout << "Q - Quit" << endl << endl;
    
    cout << "Enter your choice: ";
    cin >> input;
    cout << endl;
    
}

//Function - prints the current list - if empty, tells user it is empty
void printList(vector<int> &nums){
    if(nums.size() == 0){
        cout << "[] - List is empty" << endl;
    }
    else{
        for(size_t i{0}; i < nums.size(); ++i){
            cout << nums.at(i) << " ";
        }
        cout << endl << endl;
    }
}

//Function - adds to list at the end
void addToList(vector<int> &nums){
    int addNum{0};

    cout << "Enter a number: ";
    cin >> addNum;
    nums.push_back(addNum);
}

//Function - finds average using loop on vector
void calculateMeanHelper(vector<int> &nums, double &mean){
    double sum{0};
    for(size_t j{0}; j < nums.size(); ++j){
        sum += nums.at(j);
    }
    mean = sum / nums.size(); 
}

//Function - calculates average of current list
void calculateMean(vector<int> &nums){
    double mean{0};
    if(nums.size() == 0){
        cout << "Can not compute mean" << endl;
    }
    else{
        calculateMeanHelper(nums, mean);
        cout << "Mean: " << mean << endl;
    }
}

void smallestNumber(vector<int> &nums){
    int smallest{0};
    smallest = nums.at(0);
    for(size_t k{1}; k < nums.size(); ++k){
        if(nums.at(k) < smallest){
            smallest = nums.at(k);
        }
    }
    cout << "Smallest: " << smallest << endl;
}

void largestNumber(vector<int> &nums){
    int largest{0};
    largest = nums.at(0);
    for(size_t k{1}; k < nums.size(); ++k){
        if(nums.at(k) > largest){
            largest = nums.at(k);
        }
    }
    cout << "Largest: " << largest << endl;       
}

void removeAtIndex(vector<int> &nums, int idx){
    nums.erase(nums.begin() + idx);
}

void removeDuplicates(vector<int> &nums, int val){
    size_t len{nums.size()};
    int cursor{0};
    for(size_t i{0}; i < len; ++i){
        if(nums.at(cursor) == val){
            nums.erase(nums.begin() + cursor);
        }
        else{
            cursor++;
        }
    }    
}

void removeNumber(vector<int> &nums){
    //2 options, remove key at index, remove all nums == key
    char input;
    cout << "\t1. Remove at index" << endl;
    cout << "\t2. Remove all duplicates" << endl;

    cout << "\tEnter removal option: ";
    cin >> input;
    
    switch(input){
        case '1':
            int idx;
            cout << "Choose an index: ";
            cin >> idx;
            removeAtIndex(nums, idx);
            break;
        case '2': 
            int val;
            cout << "Choose a value: ";
            cin >> val;
            removeDuplicates(nums, val);
            break;
        default:
            cout << "Not a valid option" << endl;
    }
}

int runOptions(char &input, vector<int> &nums){
    if(input == 'P' || input == 'p'){
        printList(nums);
    }
    else if(input == 'A' || input == 'a'){ 
        addToList(nums);
    }
    else if(input == 'M' || input == 'm'){ 
        calculateMean(nums);
    }
    else if(input == 'S' || input == 's'){ 
        smallestNumber(nums);
    }
    else if(input == 'L' || input == 'l'){ 
        largestNumber(nums);
    }
    else if(input == 'R' || input == 'r'){ 
        removeNumber(nums);
    }
    else if(input == 'Q' || input == 'q'){ 
        return -1;
    }
    else{
        cout << "Choice not recognized, try again. " << endl;
    }
    return 1;
}

//Function - controls the user's input to list
void runProgram(){
    char input;
    int quitOption{0};
    vector<int> nums;
    
    
    //Ask for input and run options
    while(quitOption != -1){
        promptUser(input);
        quitOption = runOptions(input, nums);
    }
}
