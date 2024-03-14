#include <iostream>

int conter = 0;
int get_counter(){
    return ++conter;
}

int main(){
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}