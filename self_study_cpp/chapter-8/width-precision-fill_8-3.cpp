#include <iostream>

int main(){
    std::cout.width(6);
    std::cout << 123 << std::endl;

    std::cout.width(6);
    std::cout << 123456789 << std::endl;

    std::cout.precision(6);
    std::cout << 123.456789f << std::endl;

    std::cout.precision(6);
    std::cout.width(8);
    std::cout.fill('#');
    std::cout << 123.456789f << std::endl;
}