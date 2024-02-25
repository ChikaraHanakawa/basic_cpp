#include <iostream>

class Base{
    public:
        virtual void foo();
};

void Base::foo(){
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base{
    public:
        void foo() override;
        void foo(int i);
};

void Derived::foo(){
    std::cout << "Derived::foo() override" << std::endl;
}
void Derived::foo(int i){
    std::cout << "Derived::foo(int)" << std::endl;
}

int main(){
    Derived derived;
    derived.foo();
    derived.foo(42);
}