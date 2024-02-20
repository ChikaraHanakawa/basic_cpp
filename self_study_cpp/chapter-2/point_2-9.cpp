#include <iostream>

int main(){
    int value = 42;
    int other = 0;
    int* ptr = &value;
    int& reference = value;

    std::cout << "valueのアドレスは" << &value << "で値は" << value << std::endl;
    std::cout << "otherのアドレスは" << &other << "で値は" << other << std::endl;
    std::cout << "ptrのアドレスは" << ptr << "で値は" << *ptr << std::endl;
    std::cout << "referenceのアドレスは" << &reference << "で値は" << reference << std::endl;

    ptr = &other;
    reference = other;

    std::cout << "valueのアドレスは" << &value << "で値は" << value << std::endl;
    std::cout << "otherのアドレスは" << &other << "で値は" << other << std::endl;
    std::cout << "ptrのアドレスは" << ptr << "で値は" << *ptr << std::endl;
    std::cout << "referenceのアドレスは" << &reference << "で値は" << reference << std::endl;
}