#include <iostream>

void print(){
    std::cout << "different function. because macro" << std::endl;
}

int main(){
    #define hello print
    hello();
}