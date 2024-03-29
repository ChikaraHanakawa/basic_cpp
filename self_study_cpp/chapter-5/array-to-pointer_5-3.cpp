#include <iostream>

int main(){
    int array[5] = {1, 2, 3, 4, 5};
    int *ptr = array;
    ptr += 2;
    std::cout << *ptr << std::endl;
    ++ptr;
    std::cout << *ptr << std::endl;
    ptr -= 2;
    std::cout << *ptr << std::endl;
    --ptr;
    std::cout << *ptr << std::endl;
    return 0;
}