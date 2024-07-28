#include <iostream>

int main(){
    std::cout << 123.456f << std::endl;
    std::cout << 123456 << std::endl;
    std::cout.setf(std::ios::scientific);
    std::cout << 123.456f << std::endl;
    std::cout << 123456 << std::endl;
    std::cout.setf(std::ios::hex);
    std::cout << 123.456f << std::endl;
    std::cout << 123456 << std::endl;
    std::cout.unsetf(std::ios::dec);
    std::cout << 123456 << std::endl;
}