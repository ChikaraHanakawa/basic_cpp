#include <iostream>

class Base{
    public:
        Base(int n){
            std::cout << "Base Constructor" << std::endl;
        }
        ~Base(){
            std::cout << "Base Destructor" << std::endl;
        }
};

class Sub : public Base{
    public:
        Sub(int n) : Base(n){}
};

int main(){
    Sub sub(1);
    return 0;
}