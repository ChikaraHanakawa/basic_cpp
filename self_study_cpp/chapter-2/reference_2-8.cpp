#include <iostream>

int main(){
    int value = 42;

    std::cout << "valueのアドレスは" << &value << "で値は" << value << std::endl;
    int& reference = value;

    std::cout << "referenceのアドレスは" << &reference << "で値は" << reference << std::endl;

    reference = 0;
    std::cout << "valueのアドレスは" << &value << "で値は" << value << std::endl;
}