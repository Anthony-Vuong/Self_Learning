#include <iostream>

using namespace std;
#include <string>

class Shallow{

private:
    int *data;

public:  
    void set_data(int val){
        *data = val; 
    }
    
    int get_data(){
        return *data;
    }
 
    /*Single constructor*/

    Shallow(int d);
    
    /* Copy Constructor */
    Shallow(const Shallow &source);
    
    /*Destructor*/
    ~Shallow();
  
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

// Copy constructor initialization
//Player::Player(const Player &source)
//    : name{source.name}, health{source.health}, xp{source.xp}{
//        cout << "Copy contsturctor" << endl;        
//}

//Copy constructor delegating
Shallow::Shallow(const Shallow &source)
    : data{source.data}{
       cout << "Copy contsturctor" << endl;        
}

Shallow::~Shallow(){
       delete data; 
       cout << "Destructor" << endl;        
}

void display_shallow(Shallow p){
        cout << p.get_data() << endl;

}

int main()
{
    Shallow obj1{100};
    display_shallow(obj1);
    
    Shallow obj2{obj1};
    obj2.set_data(1000);
    
    
	return 0;
}
