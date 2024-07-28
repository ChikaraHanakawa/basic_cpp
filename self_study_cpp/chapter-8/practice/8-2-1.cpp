#include <iostream>
#include <cmath>

int main(){
    auto dephalt = std::cout.flags();
    double pi = M_PI;
    std::cout.setf(std::ios::scientific, std::ios::hex);
    std::cout.width(10);
    std::cout << pi << std::endl;
    std::cout.flags(dephalt);
}