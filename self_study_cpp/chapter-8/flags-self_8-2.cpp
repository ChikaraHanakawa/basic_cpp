#include <iostream>

int main(){
    auto dephalt = std::cout.flags();
    std::cout.setf(std::ios::scientific);

    // basefieldをクリア，つまり基数に関するフラグをクリア
    std::cout.setf(std::ios::hex, std::ios::basefield);

    std::cout << 123.456f << std::endl;
    std::cout << 123456 << std::endl;

    std::cout.flags(dephalt);

    std::cout << 123.456f << std::endl;
    std::cout << 123456 << std::endl;
}