#include <iostream>

using namespace std;


class Deep{
    
private:
    int *data;


public:

    int get_data(){
        return *data;
    }
    
    void set_data(int val){
        *data = val;
    }
    
    //Constructor
    Deep(int val);
    
    //Copy Constructor
    Deep(const Deep &source);
    
    //Destructor
    ~Deep();

};

//Constructor initialization
Deep::Deep(int val){
        data = new int;
        *data = val;
}

Deep::Deep(const Deep &source)
    :Deep{*source.data}{
    cout << "Copy constructor" << endl;

}
    
Deep::~Deep(){
    delete data;
    cout << "Free memory" << endl;
}

void display_deep(Deep d){
    cout << d.get_data() << endl;
}


int main(){
    
    Deep obj1{100};
    display_deep(obj1);
    
    Deep obj2{obj1};
    obj2.set_data(1000);
    display_deep(obj2);
    
    
    
    return 0;
}