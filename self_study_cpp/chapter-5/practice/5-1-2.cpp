#include <iostream>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    std::cout << *p << std::endl;
    std::cout << *(p+1) << std::endl;
    std::cout << *(p+2) << std::endl;
    std::cout << *(p+3) << std::endl;
    std::cout << *(p+4) << std::endl;
}