#include <iostream>

int main(){
    int i = 0;
    int &j = i;
    j = 42;

    std::cout << i << std::endl;
}