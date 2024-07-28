#include <iostream>

int main(){
    auto dephalt = std::cout.flags();
    std::cout.setf(std::ios::right, std::ios::adjustfield);
    std::cout.setf(std::ios::oct, std::ios::basefield);
    std::cout.width(8);
    std::cout.fill('-');
    std::cout << 1234 << std::endl;
    std::cout.flags(dephalt);
}