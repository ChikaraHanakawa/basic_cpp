#include <iostream>

template <typename T>

T id(T x){
    return x;
}

int main(){
    std::cout << id(1) << std::endl;
    std::cout << id(1.2345) << std::endl;
    std::cout << id("hello") << std::endl;
    std::cout << id(1.2345f) << std::endl;
    std::cout << id('c') << std::endl;
    std::cout << id(1.2345L) << std::endl;
    std::cout << id(1u) << std::endl;
    return 0;
}