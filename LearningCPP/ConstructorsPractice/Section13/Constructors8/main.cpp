#include <iostream>
#include <vector>

using namespace std;

class Move{
    
private:
        int *data;
        
public:

        void set_data(int val){
            *data = val;
        }
        
        int get_data(){
            return *data;
        }
        
        //Constructor
        Move(int data);
        //Copy Constructor
        Move(const Move &source);
        //Move constructor
        Move(Move &&source) noexcept;
        //Destructor
        ~Move();

};

Move::Move(int val){
    data = new int;
    *data = val;
    cout << "Constructor" << endl;
}

Move::Move(const Move &source)
    :Move{*source.data}{
    cout << "Deep Copy constructor" << endl;
}

Move::Move(Move &&source) noexcept
    :data{source.data}{
    source.data = nullptr;
    cout << "Move Copy constructor" << endl;
}
    
Move::~Move(){
    delete data;
    cout << "Destructor: free memory" << endl;
}



int main()
{
    vector<Move> vm;
    
    vm.push_back(Move{10});
    vm.push_back(Move{20});
    vm.push_back(Move{30});
    vm.push_back(Move{40});
    vm.push_back(Move{50});
    vm.push_back(Move{60});
    vm.push_back(Move{70});
    vm.push_back(Move{80});
    
    
    
    return 0;
}
