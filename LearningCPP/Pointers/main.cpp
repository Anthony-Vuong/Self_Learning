#include <iostream>
#include <vector>

using namespace std;


void print(int *nums, int size1){
    
    int i{0};
    
    while(i < size1){
        cout << *nums++ << endl;
        i++;
    }
    
}


int *apply_all(int *array1, int s1, int *array2, int s2){
    
    int nums = s1 + s2;
    int k{0};
    int *newArray = new int[nums];

    newArray[0] = array1[0] * array2[0];
    for(int i{0}; i < s1; ++i){
        for(int j{0}; j < s2; ++j){
            newArray[k] = array1[i] * array2[j];
            k++;
        }
    }
    
    return newArray;
}

int main()
{
	int array1[]{1, 2, 3, 4, 5};
    int array2[]{10, 20, 30};

    int *result = apply_all(array1, 5, array2, 3);
    
    print(result, 15);
    
    
    delete [] result;
	return 0;
}




