#include <iostream>

class Base{
    public:
        virtual void methodA(){
            std::cout << "Base Method A" << std::endl;
        }
};

class Derived : public Base{
    public:
        void methodA() final{
            std::cout << "Derived Method A" << std::endl;
        }
};

int main(){
    Derived d;
    d.methodA();
    return 0;
}