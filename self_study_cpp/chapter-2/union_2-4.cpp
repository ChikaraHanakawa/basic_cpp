#include <iostream>

union U{
    int a;
    int b;
    int c;
};

int main(){
    U u;
    std::cout << "u.aのアドレス:" << &u.a << std::endl;
    std::cout << "u.bのアドレス:" << &u.b << std::endl;
    std::cout << "u.cのアドレス:" << &u.c << std::endl;
}