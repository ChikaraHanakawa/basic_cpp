#include <iostream>

class A{
    public:
        A(const A& other);
        A(){
            std::cout << "constructor" << std::endl;
        }
};

A::A(const A& other) : A(){
    std::cout << "copy" << std::endl;
}

int main(){
    A a;
    A copy(a);
    return 0;
}