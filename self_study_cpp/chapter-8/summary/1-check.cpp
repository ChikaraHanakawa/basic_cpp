#include <iostream>
#include <iomanip>

int main(){
    int num = 123456;
    std::cout << std::left << std::setw(16) << std::hex << std::setfill('=') << num << std::endl;
}