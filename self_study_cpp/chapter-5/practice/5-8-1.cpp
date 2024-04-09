#include <iostream>

int receive(int&& x){
    return x;
}

int main(){
    int x = 5;
    std::cout << receive(std::move(x)) << std::endl;
    return 0;
}