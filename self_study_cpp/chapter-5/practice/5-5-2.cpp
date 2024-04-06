#include <iostream>
#include <initializer_list>

class reciver{
    public:
        reciver(std::initializer_list<int> list);
        ~reciver();
};

reciver::reciver(std::initializer_list<int> list){
    for(auto i : list){
        std::cout << i << std::endl;
    }
}
reciver::~reciver(){
    std::cout << "Destructor" << std::endl;
}

int main(){
    reciver r = {1, 2, 3, 4, 5};
    return 0;
}