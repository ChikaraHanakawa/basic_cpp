#include <iostream>

template <typename T>

T id(T x){
    return x;
}

int main(){
    std::cout << id(1) << std::endl;
    std::cout << id(1.2345) << std::endl;
    std::cout << id("hello") << std::endl;
    return 0;
}