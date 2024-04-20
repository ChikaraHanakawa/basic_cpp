#include <iostream>

class A{
    int value = 0;
    public:
        void set(int value){ this->value = value;}
        void foo();
};

void A::foo(){
    auto lambda = [this](){
        std::cout << value << std::endl;
    };
    lambda();
}

int main(){
    A a;
    a.set(42);
    a.foo();
    return 0;
}