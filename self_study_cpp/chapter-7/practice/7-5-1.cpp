#include <iostream>

class BaseA{
    public:
        BaseA(){
            std::cout << "BaseA Constructor" << std::endl;
        }
};

class BaseB{
    public:
        BaseB(){
            std::cout << "BaseB Constructor" << std::endl;
        }
};

class Two_Derived : public  BaseA, public BaseB{
    public:
        Two_Derived(){
            std::cout << "Two_Derived Constructor" << std::endl;
        }
};

int main(){
    Two_Derived two_derived;
}