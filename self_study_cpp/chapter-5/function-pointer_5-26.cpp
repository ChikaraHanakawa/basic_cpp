#include <iostream>

int identity(int v){
    return v;
}

int square(int v){
    return v * v;
}

int main(){
    int (*func)(int) = &identity;
    std::cout << "func(4):" << func(4) << std::endl;
    func = &square;
    std::cout << "func(4):" << func(4) << std::endl;
}